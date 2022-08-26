#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Crie um programa que exiba a série de Fibonacci até o décimo quinto termo. 
// A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34....etc. 
// Essa série se caracteriza pela soma de um termo posterior com seu anterior subseqüente.

int Fibonacci (int x, int a, int b);

int main()
{ setlocale (LC_ALL, "portuguese");
	int i;
	int x = 0;
	int a = 0;
	int b = 1;
	
	Fibonacci (x, a, b);
}

	int Fibonacci (int x, int a, int b)
{	int i;

	for (i = 1; i < 16; i++)

	{
    x = a + b;
    b = a;
    a = x;
    
	printf ("\n A sequência Fibonacci é: %i \n", x);
	
    }
    
getch();

}

