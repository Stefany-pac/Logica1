#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

// Elaborar um algoritmo que se utilize de fun��es com passagem de par�metros. Ele dever� receber dois n�meros inteiros (dividendo e divisor respectivamente), 
// via teclado, e passar esses n�meros, como par�metros, para uma fun��o. Essa fun��o dever� ser capaz de calcular o valor da o primeiro n�mero ELEVADO ao segundo n�mero
// e retornar, a quem a chamou, o resultado dessa opera��o. De posse dessa informa��o, o algoritmo que chamou essa fun��o dever� apresentar em tela o valor dos dois n�meros 
// digitados e o c�lculo da POT�NCIA entre eles.
// DICA: O aluno dever� desenvolver sua pr�pria fun��o, se utilizando de la�os. 

int func (int a, int b);

int main ()
{
	int numeint;
	int result;
	int numeinT;
	int R;
	
	setlocale (LC_ALL, "portuguese");
	
	printf ("\n Insira o primeiro n�mero desejado: ");
	scanf ("%d", &numeint);
	
	printf ("\n Insira o segundo n�mero desejado: ");
	scanf ("%d", &numeinT);
	
	
	result = func (numeint, numeinT);
	
	printf ("\n O resultado da potencia��o �: %d", result);
	
	printf ("\n O resultado do n�mero elevado �: %d", R);

}

int func (int numeint, int numeinT)

{
	int I, R=1, X, result=1;
	
 	for (I=1; I<=numeinT; ++I)
	 	result *= numeint;
 	
 	return result; 
}
