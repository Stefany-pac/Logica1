#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Num laborat�rio de f�sica, em uma experi�ncia de Movimento Uniformemente Variado, 
// foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2. 
//Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a f�rmula:
//s = s0 + v0 . t + � . a . t2

int main ()
{
setlocale(LC_ALL,"Portuguese");
float  SM, TS;

printf ("Insira o valor de t: ");
scanf ("%f",&TS);

SM =2+3*TS+ 5*TS*TS;

printf ("\n %f Metros",SM);
getch();
}
