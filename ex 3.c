#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Calcule quantos azulejos são necessários para azulejar uma parede.
// É necessário conhecer a altura da parede (AP), a sua largura (LP), e a altura
// do azulejo (AA) e sua largura (LA). 
//Leia os dados através do teclado.

int main ()
{ setlocale(LC_ALL,"Portuguese");
float AP, LP, AA, LA,X;
printf ("Insira a altura da parede:");
scanf ("%f",&AP);
printf("Insira a largura da parede:");
scanf ("%f",&LP);
printf ("Insira a altura do azulejo:");
scanf ("%f",&AA);
printf ("Insira a largura do azulejo:");
scanf ("%f",&LA);
X = (AP/AA)*(LP/LA);
printf ("\n A quantidade necessária é de: %f\n",X);
getch();
}
