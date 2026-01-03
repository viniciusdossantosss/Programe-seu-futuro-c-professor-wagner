#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Aula 15 - Criando variaveis e lendo caracteres do teclado com a função getchar
	char sexo;
	
	printf("\n\t Digite f para feminino e m para masculino: ");
	sexo = getchar();
	printf("\n\tSexo:%c\n", sexo);
	printf("\n\tInteiro: %d\n", sexo);
	// Ele imprime o referente da tabela asc
	printf("\n\tLetra: g: %c\n", 103);
	
	
}
