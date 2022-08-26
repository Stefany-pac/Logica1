#include <stdio.h>
#include <locale.h>
#include <math.h>

// Faça um algoritmo que calcule a raiz quadrada de um número real qualquer N.
// Sugerimos o uso de uma fórmula iterativa que foi deduzida com o uso do método de Newton-Rapson: XNOVO = (XANTERIOR / 2) + (N / (2 * XANTERIOR))
// Onde N é valor cuja raiz será calculada; a partir de um valor XANTERIOR é calculado um valor XNOVO Este XNOVO passará a ser o XANTERIOR e, então, será calculado através 
// da mesma fórmula, o novo valor de XNOVO.
// Estes valores de XNOVO convergirão para a raiz quadrada de N. Sugerimos que adote como XANTERIOR inicial o valor N/2 e que interrompa os cálculos quando o módulo 
// de (XNOVO - XANTERIOR ) / XANTERIOR for menor que 0.001 (isto é uma medida de precisão). Ex.: raiz quadrada de 9.

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

