#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Elaborar um programa que receba, via teclado, os valores do espaço percorrido e do tempo gasto 
//por um veículo em movimento, para calcular e apresentar em tela sua velocidade média.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float  Velo, Esp, Tempo;

printf("Insira o espaço percorrido:");
scanf ("%f",&Esp);
printf("Insira o tempo gasto pelo veículo em movimento:");
scanf ("%f",&Tempo);

Velo=Esp/Tempo;

printf ("\n %f = VELOCIDADE",Velo);
getch();
}
