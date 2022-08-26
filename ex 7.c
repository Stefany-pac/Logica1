#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

//Crie um algoritmo que simule uma calculadora com as operações listadas abaixo, utilizando estrutura de controle ENQUANTO, ESCOLHA e ainda SUBROTINAS 
//(subprogramas, procedimentos, funções) para dois números reais:

//1- Potência de 5
//2- Raiz quadrada 
//3- Módulo
//4- Sair do programa

int menu ();
int potencia ();
int raiz ();
int mod ();
int saida ();

int main ()
{
	setlocale (LC_ALL, "Portuguese");
		
		menu();
		
	getch ();
}

int menu ()
{
	int op;
	
		printf ("\n\t ------------------ MENU ----------------- \n");
		printf ("\n\t 1. Cálculo de potência \n");
		printf ("\t 2. Cálculo de Raiz Quadrada \n");
		printf ("\t 3. Cálculo de Módulo  \n");
		printf ("\t 4. Sair \n");
		
		printf ("\n\t Entre com a opção desejada: ");
		scanf ("%i", &op);
	
	printf ("\n\t ------------------------------------------ \n");
		switch (op)
		{
			case 1: potencia (); 
				break;
			case 2: raiz (); 
				break;
			case 3: mod (); 	
				break;
			case 4: saida (); 
				break;
			default: break;
		}
	
	return 0;
}

int potencia ()
{	int R, X;

	printf ("\t Digite o valor de X: ");
	scanf ("%d", &X);
	R = pow (X,5);
	printf ("\t Resultado: %d", R);
	
	menu ();
	
	return 0;
}

int raiz ()
{	int R, X;
	printf ("\t Digite o valor de X: ");
	scanf ("%d", &X);
	R = sqrt (X);
	printf ("\t Resultado: %d", R);
	
	menu ();
	
	return 0;
}

int mod ()
{
	int R,X;
	printf ("\t Digite o valor de X: ");
	scanf ("%d", &X);
	R = abs (-X);
	printf ("\t Resultado: %d", R);
	
	menu ();
	
	return 0;
}

int saida ()
{
	printf ("\n Até mais :)");
}





