#include <stdio.h>
#include <stdlib.h>

int main(){
	//Comentário
	
	printf("Hello World!\n");//imprimir na tela
	
	// \n - pula uma linha
	// \t - tabulação ou identação
	// \" ou \' - comando usado para imprimir as aspas
	// %d - para imprimir um numero inteiro
	// %f - para imprimir um numero real tipo float
	// %c - para imprimir um character
	
	// Operações matemáticas
	
	printf("%d + %d = %d\n", 10, 15, 10 + 15);
	printf("%d - %d = %d\n", 10, 15, 10 - 15);
	printf("%d * %d = %d\n", 10, 15, 10 * 15);
	printf("%d / %d = %d\n", 10, 15, 10 / 15);	
	
	// Criando variaveis
	
	int idade = 45;
	
	printf("Idade: %d\n", idade);
	
	// Lendo informação do teclado
	
	int idade2; // int significa qe a variavel é um número inteiro
	
	printf("Qual a sua idade?\n");
	scanf("%d", &idade2); // O scanf usa um referencia diferente do print pois ele salva a informação no endereço de memoria do idade2 por isso usamos o &
	printf("Sua idade eh %d\n", idade2);
	
	// Segundo exemplo
	int num1, num2;
	
	printf("Digite dois numeros inteiros\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("A soma desses numeros eh: %d\n", num1 + num2);
	
	// Novos tipos de variaveis 
	
	float peso = 75.57; // numeros reais que possuem casa decimais com precição indicada de até duas casas decimais
	
	printf("Qual o seu peso?\n");
	scanf("%f", &peso); // Sobrescrevendo o valor de uma variavel ja declarada
	printf("Sua peso eh %f\n", peso);
	
	// Caracteres
	
	char sexo = 'w'; // variavel do tipo caracter, não confundir com string
	
	printf("Qual o seu sexo? Digite f para feminino ou m para masculino\n");
	scanf(" %c", &sexo);
	printf("Seu sexo eh %c\n", sexo);
	
	// caracteres com a função getchar()
	
	char primeiraletra;
	
	printf("Qual a primeira letra do seu nome?\n");
	primeiraletra = getchar(); 
	printf("Seu nome comeca com %c\n", primeiraletra);
	
	// caracteres com a função getc()
	
	char ultimaletra;
	
	printf("Qual a ultima letra do seu nome?\n");
	ultimaletra = getc(stdin); 
	printf("Seu nome termina com %c\n", ultimaletra);
	
	// caracteres com a função fgetc()
	
	char primeiraletra2;
	
	printf("Qual a primeira letra do seu ultimo nome?\n");
	primeiraletra2 = fgetc(stdin); 
	printf("Seu ultimo nome comeca com %c\n", primeiraletra2);
	
	// esse codigo possui um problema com buffer de entrada que ainda nao foi solucionado pelo curso, lembrando que esse arquivo é pra consulta futura
	return 0;
}
