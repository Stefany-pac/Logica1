#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Elaborar um programa para calcular e imprimir o volume (V) de uma esfera e a �rea (A) 
//de sua superf�cie, dado o valor de seu raio (R). A f�rmula do volume da esfera � V=4/3 
//(pi= 3,14) R3 e da �rea � A=4(pi=3,14) R2.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float r, V, A;
printf ("Insira o volume da esferae a �rea de sua superf�cie:");
scanf ("%f",&r);
V=(4/3)*3,14*r*r*r;
A=4*3,14*r*r;
printf ("\n%f = �rea, %f = circunfer�ncia.\n",V,A); 
getch();
}
