#include <stdio.h>
#include <conio.h>
#include <locale.h>

//A condi��o f�sica de uma pessoa pode ser medida com base no c�lculo do IMC, 
//�ndice de Massa Corporal, o qual � calculado dividindo-se a massa da pessoa (em kg) 
//pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h�). 
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
printf ("O seu �ndice de Massa Corporal�:%f\n", IMC);
}
