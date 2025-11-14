#include<stdio.h> //Biblioteca de entrada e saida de dados
#include<stdlib.h> // Biblioteca para o utilizar o pause

int main(){
	int age;
	float alt, peso;
	char name[50];
	
	// %s para string
	// %c para char
	printf("Digite seu nome: ");
	scanf("%s", name);
	
	// %d para int
	printf("Digite sua idade: ");
	scanf("%d", &age);
		
	// %f para float
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Nome: %s \nIdade: %d \nAltura: %.2f \nPeso: %.2f\n", name, age, alt, peso);
	
	system("pause");
	return 0;
} 

