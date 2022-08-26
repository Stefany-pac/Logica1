#include <stdio.h>

// Escreva algoritmos em Linguagem C++ para calcular e exibir o resultado de cada uma das séries:
// a) S = 1 /1 + 1/ 2 + 1 / 3 + …. + 1 / N para os 50 primeiros termos.
// b) S = x / 1 - x / 2 + x / 3 - x / 4 + x / 5 - …. + x / 19 - x / 20

int main ()
{	setlocale (LC_ALL, "Portuguese");

int i, r1, r2, n;

	for (i=1; i<=50; i++)
		r1 += (1/i);
		
	printf ("Digite um número: ");
	scanf ("%d", &n);
		
	for (i=1; i<=20; i++)
		if (i%2==0)
			r2 += n/i;
		else
			r2 -= n/i;
			
	printf ("\n\n\n\t\t Resultado 1: %d \n\t\t Resultado 2: %d", r1, r2);
}
