#include <stdio.h>
#include <stdlib.h>

// Cadastro de Produto
int main(){
	
	char nomeProduto[50];
	float quantidadeEstoque, totalEstoque, preco;
	
	printf("Digite o nome do produto: ");
	scanf("%s", nomeProduto);
	printf("Digite o preço do produto: R$");
	scanf("%f", &preco);
	printf("Digite a quantidade do produto: ");
	scanf("%f", &quantidadeEstoque);
	
	totalEstoque = quantidadeEstoque * preco;
	
	printf(" === Resumo do Produto === \n");
	printf("Produto: %s \n", nomeProduto);
	printf("Preço: R$ %2.f \n", preco);
	printf("Estoque: %2.f unidade(s) \n", quantidadeEstoque);
	printf("Valor Total em Estoque: R$ %2.f \n", totalEstoque);

	system("pause");
	return 0;
}

