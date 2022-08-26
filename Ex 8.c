#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela todos os números pares existentes entre 1 e 20, utilizando o comando do-while( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i=1;
	
	do
	{	printf ("%d", i);
	
		if (i%2==0)
			printf (" -> número par");
		printf ("\n");
		i++;
	}
	while (i<=20);
}
