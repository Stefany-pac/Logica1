#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Elaborar um programa para receber valores, via teclado, nas vari�veis "a" e "b". 
// Ap�s isto, o programa, utilizando-se de uma 3a. vari�vel "c", dever� trocar o conte�do
// das vari�veis "a" e "b".

int main ()
{
setlocale(LC_ALL,"Portuguese");
float  A, B, C;

printf("Insira o valor A:");
scanf ("%f",&A);
printf("Insira o valor de B:");
scanf ("%f",&B);
C=A;
A=B;
B=C;
printf ("\n\n A = %f,B= %f ",A, B);
scanf ("%f", &C);
getch();
}


