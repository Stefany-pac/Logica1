#include <stdio.h>
#include <conio.h>

//Crie um programa que permita fazer a convers�o cambial entre Reais e D�lares. Considere como taxa de c�mbio US$1,00 = R$2,40. 
//Leia um valor em Reais pelo teclado e mostre o correspondente em D�lares.

int main ()
{
float CCREAIS, CCDOLARES;
printf ("Informe o valor em reais: R$");
scanf ("%f", &CCREAIS);
CCDOLARES=CCREAIS/2,40;
printf ("R$%f equivale a U$%f", CCREAIS, CCDOLARES);
getch();
}
