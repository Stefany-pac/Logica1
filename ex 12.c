#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Elaborar um programa que receba, via teclado, os valores do espa�o percorrido e do tempo gasto 
//por um ve�culo em movimento, para calcular e apresentar em tela sua velocidade m�dia.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float  Velo, Esp, Tempo;

printf("Insira o espa�o percorrido:");
scanf ("%f",&Esp);
printf("Insira o tempo gasto pelo ve�culo em movimento:");
scanf ("%f",&Tempo);

Velo=Esp/Tempo;

printf ("\n %f = VELOCIDADE",Velo);
getch();
}
