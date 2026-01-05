#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Aula 26 - Somei dois numeros inteiros positivos e o resultado ficou negativo, porque?
	int a, b, c;
	
	a = 2146483647;
	b = 1;
	c = b + a;
	
	printf("\n\ta = %d\n\tb = %d\n\tc = %d\n\n\n", a, b, c);
}

/* 
Isso aconteceu devido a um fenômeno chamado Integer Overflow (ou estouro de inteiro).
Basicamente, você atingiu o limite máximo de armazenamento de uma variável do tipo int e o contador "deu a volta", caindo no menor número negativo possível.
Aqui está a explicação técnica detalhada do porquê isso acontece:1. 
O Limite do intNa maioria dos computadores modernos e compiladores C, um int ocupa 4 bytes (32 bits) de memória.
Como o int guarda números positivos e negativos (signed), um bit é usado para o sinal (+ ou -) e os outros 31 para o valor.
Valor Máximo (a): $2^{31} - 1 = 2.147.483.647$Valor Mínimo: $-2^{31} = -2.147.483.648$O valor que você atribuiu à variável a é exatamente o limite máximo positivo.
2. O Que Acontece na Memória (Binário)Para o computador, os números são binários. Veja o que acontece na soma:O número 2.147.483.647 em binário é:01111111 11111111 11111111 11111111(O primeiro 0 indica que é positivo)
Quando você soma 1:+ 00000000 00000000 00000000 00000001O resultado matemático binário vira:10000000 00000000 00000000 000000003.
 A Interpretação do ComputadorEm variáveis com sinal (signed int), o primeiro bit (o da esquerda) define o sinal.Se for 0, é positivo.
 Se for 1, é negativo (usando uma lógica chamada Complemento de Dois).Como a soma forçou o bit de sinal a virar 1, o computador agora lê esse número como -2.147.483.648.
 AnalogiaImagine o hodômetro de um carro velho que vai até 99.999 km. Se você andar mais 1 km, ele não vai para 100.000, ele "zera" e volta para 00.000. No caso do int, em vez de zerar, ele volta para o início da contagem negativa.
/*
