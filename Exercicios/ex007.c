#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notaFinal;
	
	printf("Digite sua média: ");
	scanf("%f", &notaFinal);
	
	if(notaFinal >= 6){ //Condicional Composta
		printf("Aprovado \n");
	} else {
		if(notaFinal >= 4){ // Condicional Encadeada
			printf("Recuperacao \n");	
		} else {
			printf("Reprovado \n");	
		}
	}
	printf("Nota: %.2f \n", notaFinal);
	
	if(notaFinal >= 10){//Condicional Simples
		printf("Voce tirou a nota maxima!! \n");
	}
	
	
	system("pause");
	return 0;
}


