#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	a = 10;
	b = 12;
	
	a = a + b;
	b = a - b;
	a = a - b;
		
	printf("\ta = %d\tb = %d", a, b);
	
}
