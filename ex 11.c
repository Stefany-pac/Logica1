#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Elaborar um programa para receber valores, via teclado, nas vari�veis "a" e "b". 
// Ap�s isto, o programa, utilizando-se de uma 3a. vari�vel "c", dever� trocar o conte�do
// das vari�veis "a" e "b".
//sem utilizar-se de uma 3a. vari�vel.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float  A, B;

printf("Insira o valor A:");
scanf ("%f",&B);
printf("Insira o valor de B:");
scanf ("%f",&A);
A<-B;
B<-A;
printf ("\n\n A = %f,B= %f ",A, B);
getch();
}


