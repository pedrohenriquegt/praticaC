#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pedido;
	
	printf(" ------ Restaurante ------\n");

	printf("Prato \t\t\tOpção\n");
	printf("Picanha \t\t1\n");
	printf("Lasanha \t\t2\n");
	printf("Feijoada \t\t3\n");
	printf("Salmão Grelhado\t\t4\n");
	
	printf("Escolha seu prato: ");
	scanf("%d", &pedido);
	
	switch(pedido){
		case 1:
			printf("Voce escolheu a Picanha \n");
			break;
		case 2:
			printf("Voce escolheu a Lasanha \n");
			break;
		case 3: 
			printf("Voce escolheu a Feijoada \n");
			break;
		case 4:
			printf("Voce escolheu o Salmão Grelhado \n");
			break;
		default:
			printf("Numero de pedido invalido \n");
			break;
			
	}
	
	if(pedido <= 4){
		printf("Bom apetite!!!\n");	
	} else {
		printf("Tente novamente \n");
	}
	
	
	system("pause");
	return 0;
}

