#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela todos os n�meros pares existentes entre 20 e 1, utilizando o comando while( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i=20;
	
	while(i>=1)
	{	printf ("%d", i);
		if (i%2==0)
			printf (" -> n�mero par");
		printf ("\n");
		i--;
	}
}
