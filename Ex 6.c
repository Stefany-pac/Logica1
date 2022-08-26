#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os números de 20 a 1, informando quando eles são pares e quando são ímpares, utilizando o comando for( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i;
	
	for (i=1; i<=20; i++)
	{	printf ("%d", i);
		if (i%2==0)
			printf (" -> número par");
		else
			printf (" -> número ímpar");
		printf ("\n");
	}
}
