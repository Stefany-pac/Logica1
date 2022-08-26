#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Elaborar um programa para calcular e imprimir o volume (V) de uma esfera e a área (A) 
//de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é V=4/3 
//(pi= 3,14) R3 e da área é A=4(pi=3,14) R2.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float r, V, A;
printf ("Insira o volume da esferae a área de sua superfície:");
scanf ("%f",&r);
V=(4/3)*3,14*r*r*r;
A=4*3,14*r*r;
printf ("\n%f = área, %f = circunferência.\n",V,A); 
getch();
}
