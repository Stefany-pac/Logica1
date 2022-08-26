#include <stdio.h>
#include <string.h>
#include <locale.h>

// Elaborar um programa que seja uma "Calculadora", onde o usu�rio dever� digitar uma das seguintes teclas: '+', '-', '*', '/' ou 'S'. - Caso escolha 'S', 
// para sair, o programa dever� ser encerrado; - Caso escolha '+', '-', '*' ou '/', como opera��es aritm�ticas, o programa dever� solicitar a digita��o 
// de dois n�meros quaisquer (n�mero a e n�mero b), um por vez, realizar a respectiva opera��o aritm�tica (soma, subtra��o, multiplica��o ou divis�o) 
// entre os respectivos n�meros (a e b, nessa ordem) e ent�o apresentar o seu resultado. Ap�s isto, dever� voltar � etapa inicial de digita��o das teclas
//  '+', '-', '*', '/' ou 'S' e repetir este item at� a digita��o da tecla 'S'.


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	char simbolo;
	
	do
	{	printf ("Considere os s�mbolo e as respectivas opera��es: \n\t(+) Soma \n\t(-) Subtra��o \n\t(*) Multiplica��o \n\t(/) Divis�o \n\t(S) Sair");
		printf ("\n\nEscolha o s�mbolo desejado: ");
		scanf ("%s", &simbolo);
		fflush(stdin);
		
		if (simbolo == 's' || simbolo=='S')
		{	printf ("\n\n\tByeee");
			break;
		}
	
		printf ("\n\nInforme o primeiro n�mero (inteiro): ");
		scanf ("%d", &N1);
		printf ("Informe o segundo n�mero (inteiro): ");
		scanf ("%d", &N2);
		fflush(stdin);
		
		if (simbolo == '+')
			printf ("\n\n\tA soma � %d", N1+N2);
		else if (simbolo == '-')	
			printf ("\n\n\tA diferen�a � %d", N1-N2);
		else if (simbolo == '*')	
			printf ("\n\n\tA multiplica��o � %d", N1*N2);
		else if (simbolo == '/')	
			printf ("\n\n\tA divis�o � %d", N1/N2);
		printf ("\n\n---------------------------------------------------------\n");
	} while (simbolo!='s' || simbolo!='s');
}
