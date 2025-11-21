#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//19-11-2025

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float gasolinaLitro = 6.90, alcoolLitro = 4.90, litros, valorTotal, desconto;    
    char gasolinaTipo[50];   
	int opcao;
	
	printf("Combustiveis disponiveis: \n1 - Gasolina\n2 - Alcool\nR: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			strcpy(gasolinaTipo, "Gasolina");
			printf("Quantos litros voce vai abastecer: \n");
			scanf("%f", &litros);
			if(litros<25){                       
				desconto = (litros * gasolinaLitro) * 0.09;
			} else {
				desconto = (litros * gasolinaLitro) * 0.07;
			}
            valorTotal = litros * gasolinaLitro - desconto;
		break;
		case 2:
			strcpy(gasolinaTipo, "Alcool");
			printf("Quantos litros voce vai abastecer: \n");
			scanf("%f", &litros);
			if(litros<25){                           
				desconto = (litros * alcoolLitro) * 0.075;
			} else {
				desconto = (litros * alcoolLitro) * 0.05;
			}
            valorTotal = litros * alcoolLitro - desconto;
		break;
		default: 
			printf("Combustivel invalido");
			return 0;
		break;
	}
	printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
	
	system("pause");
	return 0;

}
