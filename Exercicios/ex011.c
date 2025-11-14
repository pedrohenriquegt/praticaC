#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Nota 1: ");
	scanf("%f", &nota1);
	printf("Nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 8){
		printf("Acima da média\n");
	}
	
	else if(media >= 6 ){
		printf("Aprovado\n");
	}
	else if(media >= 4 ){
		printf("Recuperação\n");
	}
	else{
		printf("Reprovado\n");
	}
	
	printf("Nota: %.2f\n", media);	
	
	
	system("pause");
	return 0;
}



