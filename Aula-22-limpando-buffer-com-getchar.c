#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Aula 22 - Como limpar buffer do teclado usando getchar()
	
	printf("\n\t Digite dois caracteres: ");
	scanf("%c", &a);
	getchar();
	scanf("%c", &b);
	printf("\n\ta = %c\tb = %c\n", a, b);
	printf("\n\ta = %d\tb = %d\n", a, b);
}
