#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Aula 20 - Problema ao ler caractere. Comoco ler um caractere depoois de outros dados?
	//sexo, idade, peso e altura
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite o seu sexo (f/m), idade, peso e altura: \n");
	scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);
	printf("Sexo: %d\tIdade: %d\tPeso: %f\tAltura: %f", sexo, idade, peso, altura);
	
	//Nessa aula e nesse exemplo vemos que o scanf pega o espaço pois no printf aparece 32 que é o codigo do espaço na tabela asc
	return 0;
}
