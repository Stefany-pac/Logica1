#include <stdio.h>
#include <locale.h>
#include <math.h>

// Fa�a um algoritmo para ler uma quantidade ilimitada de n�meros do teclado (ou seja, n�o fa�a um algoritmo que leia apenas dois ou tr�s n�meros, mas que leia tantos n�meros
// quanto for necess�rio), parando apenas quando for digitado zero (0) (Sentinela), e que calcule e mostre na tela o resultado da soma dos valores absolutos dos n�meros 
// digitados (valor absoluto de um n�mero � o pr�prio n�mero sem o sinal, ou seja, sempre positivo). Segue abaixo um exemplo do funcionamento que se espera do referido algoritmo: 
// Digite n�meros: (a sentinela � o zero)
// 4, -3, -6, 7, -5, -10, 0
// Programa encerrado. O resultado � 35. A resposta � 35 porque: 4 + 3 + 6 + 7 + 5 + 10.

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
