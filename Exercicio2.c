#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	a = 10;
	b = 12;
	c = a;
	a = b;
	b = c;
	
	printf("\ta = %d\tb = %d", a, b);
	
}
