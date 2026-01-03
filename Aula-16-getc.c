#include <stdio.h>
#include <stdlib.h>

int main(){
	
	#Aula 16 - Criando variaveis e lendo caracteres do teclado com a função getc()
	char sexo;
	
	printf("\n\t Digite f para feminino e m para masculino: ");
	sexo = getc(stdin);
	printf("\n\tSexo:%c\n", sexo);
	
	
}
