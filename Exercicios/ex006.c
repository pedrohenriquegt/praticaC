#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, sub, divi, mult;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	divi = num1 / num2;
	mult = num1 * num2;
	
	printf("A soma dos dois numeros é: \t\t%.2f\n", soma);
	printf("A multiplicação dos dois numeros é: \t%.2f\n", mult);
	printf("A divisão dos dois numeros é: \t\t%.2f\n", divi);
	printf("A subtração dos dois numeros é: \t%.2f\n", sub);
	
	system("pause");
	return 0;
}


