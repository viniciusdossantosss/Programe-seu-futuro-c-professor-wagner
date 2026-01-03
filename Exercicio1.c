#include <stdio.h>
#include <stdlib.h>

int main(){
	//sexo, idade, peso e altura
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite o seu sexo (f/m), idade, peso e altura: \n");
	scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
	printf("Sexo: %c\tIdade: %d\tPeso: %f\tAltura: %f", sexo, idade, peso, altura);
	
	return 0;
}
