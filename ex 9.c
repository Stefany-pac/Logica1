#include <stdio.h>
#include <conio.h>
#include <locale.h>

// O critério de avaliação semestral de determinada escola segue a regra:
// P1 - primeira avaliação do semestre.
// P2 - segunda avaliação do semestre.
// Ativ - nota atribuída pelas atividades realizadas no semestre.
// Média = P1 x 4 + P2 x 4 + Ativ x 2
//--------------------------------------
//                10
            
//Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
// calcule e mostre a média, seguindo o cálculo acima.

int main ()
{
setlocale(LC_ALL,"Portuguese");
float Md, P1, P2, ATIV;

printf("Insira a nota da primeira avaliação:");
scanf ("%f",&P1);
printf("Insira a nota da segunda avaliação :");
scanf ("%f",&P2);
printf("Insira a nota atribuída pelas atividades realizadas: ");
scanf ("%f",&ATIV);

Md=(4*(P1+P2)+(2*ATIV))/10;


printf ("\nMédia = %.1f",Md);
getch();
}
