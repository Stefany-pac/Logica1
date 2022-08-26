#include <stdio.h>
#include <stdlib.h>

// escreva um programa para mostrar na tela os resultados de uma tabuada de um número qualquer fornecido via teclado.
// Exemplo:
// Digite o número para a tabuada: 5 <Enter>
// Tabuada do 5:
// 5 x 0 = 0
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 50

int numero,resposta;
int contador=0;

int main()
 	{
	do
	{
		system("CLS");
		printf("\t Tabuada\n");
		printf("Digite o numero da tabuada: ");
		scanf("%d",&numero);
		for(contador=0;contador<=10;contador++)
		{
			printf("%d x %d = %d\n",numero,contador,  numero*contador);
		}
		printf("\n1- Novo Calculo\n");
		printf("2 -Sair\n");
		printf("Digite a opcao desejada: ");
		scanf("%d",&resposta);
	}
		while(resposta != 2);
		system("PAUSE");
		return 0;
}

