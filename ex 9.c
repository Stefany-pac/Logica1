#include <stdio.h>
#include <conio.h>
#include <locale.h>

// O crit�rio de avalia��o semestral de determinada escola segue a regra:
// P1 - primeira avalia��o do semestre.
// P2 - segunda avalia��o do semestre.
// Ativ - nota atribu�da pelas atividades realizadas no semestre.
// M�dia = P1 x 4 + P2 x 4 + Ativ x 2
//--------------------------------------
//                10
            
//Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
// calcule e mostre a m�dia, seguindo o c�lculo acima.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float Md, P1, P2, ATIV;

printf("Insira a nota da primeira avalia��o:");
scanf ("%f",&P1);
printf("Insira a nota da segunda avalia��o :");
scanf ("%f",&P2);
printf("Insira a nota atribu�da pelas atividades realizadas: ");
scanf ("%f",&ATIV);

Md=(4*(P1+P2)+(2*ATIV))/10;


printf ("\nM�dia = %.1f",Md);
getch();
}
