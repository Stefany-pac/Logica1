#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os números de 1 a 20, utilizando o comando do-while( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i=1;
	
	do
	{	printf ("%d", i);
		printf ("\n");
		i++;
	}
	while (i<=20);
}
