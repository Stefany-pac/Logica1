#include <stdio.h>
#include <locale.h>

//Faça um algoritmo que mostre na tela todos os números primos existentes entre 1 e um número n, inteiro e não nulo, digitado.


void VerificarNumero (int n)
{	
	int i, achou=0;

	for (i=2; i<n; i++)
	{	if (n%i==0)
		{	achou++;
			break;
		}
	}
	
	if (achou==0)
		printf ("%d ", n);
}

void VerificarPrimos (int n)
{	int i;
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n\n\n Números primos: ");
	
	for (i=1; i<=n; i++)
	{	VerificarNumero (i);
	}
}

int main ()
{	int n;

	printf ("\n Digite um numero: ");
	scanf ("%d", &n);
	
	VerificarPrimos (n);
}
