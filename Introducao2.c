#include <stdio.h>
#include <stdlib.h>

int main(){
	// Como ler varios valores do teclado com a função scanf
	int idade;
	float peso, altura;
	
	printf("Digite sua idade, seu peso e sua altura: \n");
	scanf("%d%f%f", &idade, &peso, &altura);
	printf("Idade: %d\tPeso: %f\tAltura: %f\n", idade, peso, altura);
}
