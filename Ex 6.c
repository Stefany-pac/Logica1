#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os n�meros de 20 a 1, informando quando eles s�o pares e quando s�o �mpares, utilizando o comando for( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i;
	
	for (i=1; i<=20; i++)
	{	printf ("%d", i);
		if (i%2==0)
			printf (" -> n�mero par");
		else
			printf (" -> n�mero �mpar");
		printf ("\n");
	}
}
