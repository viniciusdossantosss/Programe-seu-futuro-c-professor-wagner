#include <stdio.h>
#include <stdlib.h>

int main(){
	//Aula 23 - Como descobrir o tamanho em memória de cada tipo de dado com o operador sizeof
	
	int a;
	char b;
	float c;
	
	printf("\n\tint = %d\n", sizeof(int));
	printf("\n\tchar = %d\n", sizeof(char));
	printf("\n\tfloat = %d\n", sizeof(float));
	printf("\n\tdouble = %d\n", sizeof(double));
	
	printf("\n\tint = %d\n", sizeof a);
	printf("\n\tchar = %d\n", sizeof b);
	printf("\n\tfloat = %d\n", sizeof c);
	

}

