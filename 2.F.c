#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Crie um programa que exiba a s�rie de Fibonacci at� o d�cimo quinto termo. 
// A s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34....etc. 
// Essa s�rie se caracteriza pela soma de um termo posterior com seu anterior subseq�ente.

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
    
	printf ("\n A sequ�ncia Fibonacci �: %i \n", x);
	
    }
    
getch();

}

