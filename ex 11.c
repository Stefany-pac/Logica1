#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b". 
// Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
// das variáveis "a" e "b".
//sem utilizar-se de uma 3a. variável.

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


