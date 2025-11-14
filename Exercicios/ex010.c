
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, maior;
	
	printf("Digite o primero numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	maior=num1>num2?num1:num2;
	
	printf("O maior numero é %d \n", maior);
	
	system("pause");
	return 0;
}


