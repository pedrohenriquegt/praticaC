#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[50];
	int ra;
	float nota1, nota2, nota3, media;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite seu RA: ");
	scanf("%d", &ra);
	printf("Digite sua Primeira Nota: ");
	scanf("%f", &nota1);
	printf("Digite sua Segunda Nota: ");
	scanf("%f", &nota2);
	printf("Digite sua Terceira Nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) /3;
	
	printf("");
	printf("Media do Aluno \n");
	printf("Nome: \t%s\n", nome);
	printf("RA: \t%d\n", ra);
	printf("\n");
	printf("Boletim \n");
	printf("Nota 1: \t%1.f\n", nota1);
	printf("Nota 2: \t%1.f\n", nota2);
	printf("Nota 3: \t%1.f\n", nota3);
	printf("Media: \t\t%1.f\n", media);
	
	
	
	
	system("pause");
	return 0;
}

