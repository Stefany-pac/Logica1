#include <stdio.h>
#include <conio.h>
#include <locale.h>

//A condição física de uma pessoa pode ser medida com base no cálculo do IMC, 
//Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa (em kg) 
//pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h²). 
//Escreva um programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC.

int main()
{
setlocale(LC_ALL,"Portuguese");
float M,H,IMC;
printf ("Insira a sua massa corporal:");
scanf ("%f",&M);
printf ("Insira a sua altura:");
scanf("%f",&H);
IMC = M/(H*H);
printf ("O seu Índice de Massa Corporalé:%f\n", IMC);
}
