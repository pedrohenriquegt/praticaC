#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade <= 12){
		printf("Criança, paga meia");
	} else {
		if(idade >= 13 && idade <=17){
			printf("Mostrar carteirinha estudante, paga meia");
		} else {
			if (idade >= 18 && idade < 65) {
				printf("Adulto, paga inteira");
			} else {
				if(idade >= 65){
					printf("Idoso, Entrada gratuita");
				} 
			}
		}
	}
	
	system("pause");
	return 0;
}

