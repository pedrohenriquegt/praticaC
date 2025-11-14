#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float exercicio, prova, portfolio, mediaPon;
	float sprint1, sprint2, sprint3;
	int opcao;
	
	printf(" ----- Portal do Aluno ----- \n");
	printf("Cod \tOpção\n");
	printf("1 \tDisciplina\n");
	printf("2 \tProjeto\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf(" --- Disciplinas --- \n");
			printf("Digite sua nota (Exercicíos): ");
			scanf("%f", &exercicio);
			printf("Digite sua nota (Prova): ");
			scanf("%f", &prova);
			printf("Digite sua nota (Portfólio): ");
			scanf("%f", &portfolio);
			
			mediaPon = (exercicio * 0.2) + (prova * 0.5) + (portfolio * 0.3);
			
			printf(" --- Ficha do Aluno --- \n");
			printf("Media Final: %.2f\n", mediaPon);
			if(mediaPon >= 6){
				printf("Aprovado!\n");
			} else {
				printf("Recuperação\n");
			}
			break;
		case 2:
			printf(" --- Projeto --- \n");
			printf("Digite sua nota (Sprint 1): \n");
			scanf("%f", &sprint1);
			printf("Digite sua nota (Sprint 2): \n");
			scanf("%f", &sprint2);
			printf("Digite sua nota (Sprint 3): \n");
			scanf("%f", &sprint3);
			
			mediaPon = (sprint1 * 0.1) + (sprint2 * 0.2) + (sprint3 * 0.7);
			
			printf(" --- Ficha do Aluno --- \n");
			printf("Media Final: %.2f\n", mediaPon);
			if(mediaPon >= 6){
				printf("Aprovado!\n");
			} else {
				printf("Reprovado\n");
			}
			break;
		default:
			printf("Valor Inválido, reinicie o programa!\n");
			return 0;	
	}
		
	
	
	system("pause");
	return 0;
}




