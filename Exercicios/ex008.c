#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int velocidadeCarro;
	int velocidadeLimite = 80;
	float multaPadrao = 500.00;
	float multaPorKm = 5.00;
	float kmUltrapassado;
	float multaFinal;
	
	printf("Digite sua velocidade: ");
	scanf("%d", &velocidadeCarro);
	
	kmUltrapassado = velocidadeCarro - velocidadeLimite;
	
	if (velocidadeCarro > velocidadeLimite){
		printf("MULTADO! \n");
		multaFinal = multaPorKm * kmUltrapassado + multaPadrao;
		printf("Valor da multa: R$%.2f \n", multaFinal);
		
	} else {
		printf("Boa viagem! \n");
	}
	
	system("pause");
	return 0;
}

