#include<stdio.h>
#include<locale.h>

// D - Desenvolva um programa que crie uma sub-rotina para calcular o valor da potencia de um numero qualquer, ou seja, ao se informar para a sub-rotina o numero e sua potencia, deverá ser apresentado o seu resultado. 
// EX: entrando com potencia (2,3), deverá ser exibido o valor 8.

double pot (int a, int b);

int main ()
{	setlocale (LC_ALL, "");
	int base, exp;
	double result;

	printf ("Insira a base: ");
	scanf ("%d", &base);
	
	printf ("Insira o expoente: ");
	scanf ("%d", &exp);
	
	result = pot (base, exp);
	
	printf ("\n\n\t%d elevado a %d é %.2lf", base, exp, result);
}

double pot (int a, int b)
{	int cont=0;
	double r=1;
	do
	{	r*= (double) a;
		cont++;
	}
	while (cont!=b);
	return r;
}
