#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os números de 20 a 1, utilizando o comando for( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i;
	
	for (i=1; i<=20; i++)
	{	printf ("%d", i);
		printf ("\n");
	}
}
