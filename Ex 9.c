#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os n�meros de 1 a 20, informando quando eles s�o pares e quando s�o �mpares, utilizando o comando do-while( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i=1;
	
	do
	{	printf ("%d", i);
	
		if (i%2==0)
			printf (" -> n�mero par");
		else
			printf (" -> n�mero �mpar");
		printf ("\n");
		i++;
	}
	while (i<=20);
}
