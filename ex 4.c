#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Fa�a um programa que, a partir das medidas dos lados de um ret�ngulo, lidos via teclado, 
// calcule a �rea e o per�metro deste ret�ngulo.
// A = a.b
//P = 2.a + 2.b

int main ()
{
setlocale(LC_ALL,"Portuguese");
float a,b,P,A;	
printf("Insira o valor de a: ");
scanf ("%f",&a);
printf("Insira o valor de b:");
scanf ("%f", &b);
A=(a*b);
printf("A �rea do ret�ngulo �:%f",A);
P=(2*(a+b));
printf("O per�metro do ret�ngulo �:%f",P);
}

