#include <stdio.h>
#include <stdlib.h>

int main(){
	double dia_de_trabalho = 45.0;
	int dias_trabalhados;
	double imposto = (8/100.0);
	double valor_a_ser_pago;
	
	printf("\nQauntos dias de trabalho: ");
	scanf("%d", &dias_trabalhados);
	
	valor_a_ser_pago = dia_de_trabalho * dias_trabalhados - ((dia_de_trabalho * dias_trabalhados)*imposto);
	printf("\nO valor do servico: %.2lf Reais", valor_a_ser_pago);
	
}
