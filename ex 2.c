#include <stdio.h>
#include <conio.h>
// Crie um programa que permita fazer a conversão cambial entre Dólares e Reais. 
// Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo teclado e mostre o correspondente em Reais.

int main ()
{
float CCREAIS, CCDOLARES;
printf ("Informe o valor em dolares: R$");
scanf ("%f", &CCDOLARES);
CCREAIS=CCDOLARES/2,40;
printf ("R$%f equivale a U$%f",CCDOLARES,CCREAIS);
getch();
}
