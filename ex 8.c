#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Faça um programa para calcular a média final de um aluno, supondo-se que há quatro notas
// bimestrais durante o ano e que esta é calculada através de uma média aritmética simples
// (todos os bimestres têm o mesmo peso).

int main ()
{
setlocale(LC_ALL,"Portuguese");
int n1,n2,n3,n4;
char MF;

printf("Insira a primeira nota:");
scanf ("%d",&n1);
printf("Insira a segunda nota:");
scanf ("%d",&n2);
printf("Insira a terceira nota:");
scanf ("%d",&n3);
printf("Insira a quarta nota:");
scanf ("%d",&n4);

MF=(n1+n2+n3+n4)/4;

printf ("\n\n%d = MÉDIA",MF);
getch();
}
