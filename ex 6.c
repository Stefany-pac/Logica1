#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Dado o valor do raio (r) de uma circunfer�ncia, elaborar um programa para calcular 
// e imprimir sua �rea (A) e o seu comprimento (C). 
// A f�rmula da �rea do c�rculo � A=(p=3,14) r2 e do comprimento � C=2(pi=3,14) r.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float r, A, C;
printf ("Insira o valor do raio da circunfer�ncia:"); 
scanf ("%f",&r);
A=3,14*r*r;
C=(2*3,14*r);
printf ("\n\n%f = �rea, %f = circunfer�ncia.\n",A,C);
getch();
}


