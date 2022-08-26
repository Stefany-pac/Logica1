#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

// Elaborar um algoritmo que se utilize de funções com passagem de parâmetros. Ele deverá receber dois números inteiros (dividendo e divisor respectivamente), 
// via teclado, e passar esses números, como parâmetros, para uma função. Essa função deverá ser capaz de calcular o valor da o primeiro número ELEVADO ao segundo número
// e retornar, a quem a chamou, o resultado dessa operação. De posse dessa informação, o algoritmo que chamou essa função deverá apresentar em tela o valor dos dois números 
// digitados e o cálculo da POTÊNCIA entre eles.
// DICA: O aluno deverá desenvolver sua própria função, se utilizando de laços. 

int func (int a, int b);

int main ()
{
	int numeint;
	int result;
	int numeinT;
	int R;
	
	setlocale (LC_ALL, "portuguese");
	
	printf ("\n Insira o primeiro número desejado: ");
	scanf ("%d", &numeint);
	
	printf ("\n Insira o segundo número desejado: ");
	scanf ("%d", &numeinT);
	
	
	result = func (numeint, numeinT);
	
	printf ("\n O resultado da potenciação é: %d", result);
	
	printf ("\n O resultado do número elevado é: %d", R);

}

int func (int numeint, int numeinT)

{
	int I, R=1, X, result=1;
	
 	for (I=1; I<=numeinT; ++I)
	 	result *= numeint;
 	
 	return result; 
}
