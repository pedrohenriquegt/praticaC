#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 19-11-2025

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, ant, suc;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("Numero digitado: %d\n", numero);
	printf("Antecessor: %d\n", numero - 1);
	printf("Sucessor: %d\n", numero + 1);	
	printf(" === Tabuada do %d === \n", numero);
	printf("%d X  1 = %d\n", numero, numero * 1);
	printf("%d X  2 = %d\n", numero, numero * 2);
	printf("%d X  3 = %d\n", numero, numero * 3);
	printf("%d X  4 = %d\n", numero, numero * 4);
	printf("%d X  5 = %d\n", numero, numero * 5);
	printf("%d X  6 = %d\n", numero, numero * 6);
	printf("%d X  7 = %d\n", numero, numero * 7);
	printf("%d X  8 = %d\n", numero, numero * 8);
	printf("%d X  9 = %d\n", numero, numero * 9);
	printf("%d X 10 = %d\n", numero, numero * 10);
	printf("Sequencia de dois em dois: %d... %d... %d... %d... \n", numero, numero + 2, numero + 4, numero + 6);
	
	system("pause");
	return 0;
}
