#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela todos os números impares existentes entre 1 e 20, utilizando o comando for( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i;
	
	for (i=1; i<=20; i++)
	{	printf ("%d", i);
		if (i%2==0)
			printf (" -> número par");
		printf ("\n");
	}
}
