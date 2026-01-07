#include <stdio.h>
#include <stdlib.h>

int main(){
	double despesa, total, valorpessoa;
	int pessoas, gorjeta;
	printf("\nQual o valor da conta? ");
	scanf("%lf", &despesa);
	printf("\nQual a porcentagem da gorjeta? ");
	scanf("%d", &gorjeta);
	printf("\nQuantas pessoas vao dividir a conta? ");
	scanf("%d", &pessoas);
	
	total = despesa + (despesa*(gorjeta/100.0));
	valorpessoa = total/pessoas;
	
	printf("\nO total e: %.2lf\nCada pessoa ira pagar: %.2lf", total, valorpessoa);
	
	
	
}
