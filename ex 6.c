#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular 
// e imprimir sua área (A) e o seu comprimento (C). 
// A fórmula da área do círculo é A=(p=3,14) r2 e do comprimento é C=2(pi=3,14) r.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float r, A, C;
printf ("Insira o valor do raio da circunferência:"); 
scanf ("%f",&r);
A=3,14*r*r;
C=(2*3,14*r);
printf ("\n\n%f = área, %f = circunferência.\n",A,C);
getch();
}


