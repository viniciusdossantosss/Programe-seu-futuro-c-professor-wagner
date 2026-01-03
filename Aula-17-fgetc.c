#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Aula 17 - Criando variaveis e lendo caracteres do teclado com a função fgetc()
	
	char sexo;
	
	printf("\n\t Digite f para feminino e m para masculino: ");
	sexo = fgetc(stdin);
	printf("\n\tSexo:%c\n", sexo);
	
	
}
