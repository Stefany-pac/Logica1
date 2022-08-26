#include <stdio.h>
#include <locale.h>

// Elaborar um programa que escreva em tela os números de 1 a 20, informando quando eles são pares e quando são ímpares, utilizando o comando while( ).

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int i=1;
	
	while(i<=20)
	{	printf ("%d", i);
		if (i%2==0)
			printf (" -> número par");
		else
			printf (" -> número ímpar");
		printf ("\n");
		i++;
	}
}
