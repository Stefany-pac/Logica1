#include <stdio.h>
#include <locale.h>
#include <math.h>

// Faça um algoritmo para ler uma quantidade ilimitada de números do teclado (ou seja, não faça um algoritmo que leia apenas dois ou três números, mas que leia tantos números
// quanto for necessário), parando apenas quando for digitado zero (0) (Sentinela), e que calcule e mostre na tela o resultado da soma dos valores absolutos dos números 
// digitados (valor absoluto de um número é o próprio número sem o sinal, ou seja, sempre positivo). Segue abaixo um exemplo do funcionamento que se espera do referido algoritmo: 
// Digite números: (a sentinela é o zero)
// 4, -3, -6, 7, -5, -10, 0
// Programa encerrado. O resultado é 35. A resposta é 35 porque: 4 + 3 + 6 + 7 + 5 + 10.

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int R, X, I; 
	
		do
		{
			printf ("\n Digite o valor de X: ");
			scanf ("%d", &X);
			
			if (X <= 0)
			
			{
				
				X = abs (-X);
				
			}
			
			R+=X;
		}   
			while (X != 0);
		printf ("\t \n Resultado: %d", R);
}
