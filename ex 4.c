#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via teclado, 
// calcule a área e o perímetro deste retângulo.
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
printf("A área do retângulo é:%f",A);
P=(2*(a+b));
printf("O perímetro do retângulo é:%f",P);
}

