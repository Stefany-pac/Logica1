#include <stdio.h>
#include <locale.h>
#include <math.h>

// Fa�a um algoritmo que calcule a raiz quadrada de um n�mero real qualquer N.
// Sugerimos o uso de uma f�rmula iterativa que foi deduzida com o uso do m�todo de Newton-Rapson: XNOVO = (XANTERIOR / 2) + (N / (2 * XANTERIOR))
// Onde N � valor cuja raiz ser� calculada; a partir de um valor XANTERIOR � calculado um valor XNOVO Este XNOVO passar� a ser o XANTERIOR e, ent�o, ser� calculado atrav�s 
// da mesma f�rmula, o novo valor de XNOVO.
// Estes valores de XNOVO convergir�o para a raiz quadrada de N. Sugerimos que adote como XANTERIOR inicial o valor N/2 e que interrompa os c�lculos quando o m�dulo 
// de (XNOVO - XANTERIOR ) / XANTERIOR for menor que 0.001 (isto � uma medida de precis�o). Ex.: raiz quadrada de 9.

// XNOVO 	XANTERIOR
// 3,25 	4,5
// 3,01 	3,25
// 	3 		3,01

int main ()
{
	float XNOVO, XANTERIOR, I, N, R, X;
	
	
	printf ("\t \n Digite o valor de X: ");
	scanf ("%f", &N);
	
		do
	{
		XANTERIOR = N/2;
		XNOVO = (XANTERIOR/2) + (N/ (2 * XANTERIOR));
		
	} 	while (XNOVO <= 0.001);
	
		printf ("\t \n Resultado: %f", XNOVO);
}

