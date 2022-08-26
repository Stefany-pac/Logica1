#include <stdio.h>
#include <conio.h>

//Crie um programa que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,00 = R$2,40. 
//Leia um valor em Reais pelo teclado e mostre o correspondente em Dólares.

int main ()
{
float CCREAIS, CCDOLARES;
printf ("Informe o valor em reais: R$");
scanf ("%f", &CCREAIS);
CCDOLARES=CCREAIS/2,40;
printf ("R$%f equivale a U$%f", CCREAIS, CCDOLARES);
getch();
}
