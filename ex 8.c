#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Fa�a um programa para calcular a m�dia final de um aluno, supondo-se que h� quatro notas
// bimestrais durante o ano e que esta � calculada atrav�s de uma m�dia aritm�tica simples
// (todos os bimestres t�m o mesmo peso).

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

printf ("\n\n%d = M�DIA",MF);
getch();
}
