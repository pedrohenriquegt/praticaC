#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float pesoPedido,  multiplicador, custoFinal, freteBase;
	int opcao;
	const char *regiao;
	
	
	printf("--- Calculo de Frete ---\n");
	
	printf("Digite o peso do pacote (kg): ");
	scanf("%f", &pesoPedido);
	
	printf("Digite a região de destino (codigo numerico)\n");
	printf("1 - Sul\n");
	printf("2 - Sudeste\n");
	printf("3 - Centro-Oeste\n");
	printf("4 - Nordeste\n");
	printf("5 - Norte\n");
	printf("Regiao: ");	
	scanf("%d", &opcao);
	
	freteBase = pesoPedido * 1.50;
	
	switch(opcao){
		case 1:
			multiplicador = 1.2;
			regiao = "Sul";
			break;
		case 2:
			multiplicador = 1.0;
			regiao = "Sudeste";
			break;
		case 3:
			multiplicador = 1.4;
			regiao = "Centro-Oeste";
			break;
		case 4:
			multiplicador = 1.7;
			regiao = "Nordeste";
			break;
		case 5:
			multiplicador = 2.0;
			regiao = "Norte";
			break;
		default:
			printf("Região inválida. Por favor, reinicie o programa.\n");
			return 0;
			
	}
	
	if(opcao <= 5){
		printf("\nDados da Entrega\n");
		printf("Peso: %.2fkg\n", pesoPedido);
		printf("Taxa base: R$%.2f\n", freteBase);
		printf("Região: %s\n", regiao);
		
		custoFinal = multiplicador * freteBase;
		
		printf("Custo Final: R$%.2f\n", custoFinal);	
	}
	

	system("pause");
	return 0;
}



