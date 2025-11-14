#include <stdio.h>
#include <stdlib.h>


//Calculadora de Parcelas
int main(){
	
	float valorProduto, valorParcelado;
	int numeroDeParcelas;
	
	printf("Digite o valor do produto: R$");
	scanf("%f", &valorProduto);
	printf("Digite o numero de parcelas: ");
	scanf("%d", &numeroDeParcelas);
	
	valorParcelado = valorProduto / numeroDeParcelas;
	
	printf("O produto com o valor de R$%2.f, ficou por %d parcelas de R$%2.f reais \n", valorProduto, numeroDeParcelas, valorParcelado);
	
	
	
	
	system("pause");
	return 0;
}

