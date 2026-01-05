#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Aula 21 - Como ler dois caracteres e limpar o buffer do teclado
	char a, b;
	
	printf("\n\t Digite dois caracteres: ");
	scanf("%c %c", &a, &b);
	printf("\n\ta = %c\tb = %c\n", a, b);
	printf("\n\ta = %d\tb = %d\n", a, b);
}
