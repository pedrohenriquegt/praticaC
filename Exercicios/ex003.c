
#include <stdio.h>
#include <stdlib.h>


// Conversor de Moedas (Básico)
int main(){
	float real, conversao;
	float dolar = 5.30;
	
	printf("Digite um valor em reais: R$");
	scanf("%f", &real);
	conversao = real / dolar;
	
	
	printf("De R$%.2f foi para US$%.2f", real, conversao);
	
	return 0;
}

