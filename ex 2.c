#include <stdio.h>
#include <conio.h>
// Crie um programa que permita fazer a convers�o cambial entre D�lares e Reais. 
// Considere como taxa de c�mbio US$1,00 = R$2,40. Leia um valor em D�lares pelo teclado e mostre o correspondente em Reais.

int main ()
{
float CCREAIS, CCDOLARES;
printf ("Informe o valor em dolares: R$");
scanf ("%f", &CCDOLARES);
CCREAIS=CCDOLARES/2,40;
printf ("R$%f equivale a U$%f",CCDOLARES,CCREAIS);
getch();
}
