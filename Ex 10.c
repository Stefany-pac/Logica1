#include <stdio.h>
#include <string.h>
#include <locale.h>

// Elaborar um programa que seja uma "Calculadora", onde o usuário deverá digitar uma das seguintes teclas: '+', '-', '*', '/' ou 'S'. - Caso escolha 'S', 
// para sair, o programa deverá ser encerrado; - Caso escolha '+', '-', '*' ou '/', como operações aritméticas, o programa deverá solicitar a digitação 
// de dois números quaisquer (número a e número b), um por vez, realizar a respectiva operação aritmética (soma, subtração, multiplicação ou divisão) 
// entre os respectivos números (a e b, nessa ordem) e então apresentar o seu resultado. Após isto, deverá voltar à etapa inicial de digitação das teclas
//  '+', '-', '*', '/' ou 'S' e repetir este item até a digitação da tecla 'S'.


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	char simbolo;
	
	do
	{	printf ("Considere os símbolo e as respectivas operações: \n\t(+) Soma \n\t(-) Subtração \n\t(*) Multiplicação \n\t(/) Divisão \n\t(S) Sair");
		printf ("\n\nEscolha o símbolo desejado: ");
		scanf ("%s", &simbolo);
		fflush(stdin);
		
		if (simbolo == 's' || simbolo=='S')
		{	printf ("\n\n\tByeee");
			break;
		}
	
		printf ("\n\nInforme o primeiro número (inteiro): ");
		scanf ("%d", &N1);
		printf ("Informe o segundo número (inteiro): ");
		scanf ("%d", &N2);
		fflush(stdin);
		
		if (simbolo == '+')
			printf ("\n\n\tA soma é %d", N1+N2);
		else if (simbolo == '-')	
			printf ("\n\n\tA diferença é %d", N1-N2);
		else if (simbolo == '*')	
			printf ("\n\n\tA multiplicação é %d", N1*N2);
		else if (simbolo == '/')	
			printf ("\n\n\tA divisão é %d", N1/N2);
		printf ("\n\n---------------------------------------------------------\n");
	} while (simbolo!='s' || simbolo!='s');
}
