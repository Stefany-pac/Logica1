#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Ler duas matrizes A e B do tipo vetor, com  elementos cada. Criar uma matriz C,
// sendo essa a junção das duas outras matrizes. Assim, C deverá ter o dobro de elementos, ou seja, 60. Exibir a matriz C.
// Aqui, deverá ser criada uma sub-rotina para cada tarefa do programa, ou seja, serão 4 sub-rotinas, sendo 2 para leituras das matrizes, 
// uma para a junção e a última para a exibição dos dados. No final, o programa principal deverá chamar as rotinas definidas.

int leituraA (int *A);
int leituraB (int *B);
int juncao (int *A, int *B, int *C);
int exibe (int *C);

int main ()
{ 
	setlocale (LC_ALL, "portuguese");
	int A [30];
	int B [30];
	int C [60];
	int i;
	
	leituraA (A);
	leituraB (B);
	juncao (A, B, C);
	exibe (C);
}
	
	int leituraA(int *A)
	{ int i;
	printf ("\n Insira 30 números da matriz A: ");
	
	for (i=0; i<=29; ++i)
	scanf ("%d", &A[i]);
	}

	int leituraB(int *B)
	{ int i;
	printf ("\n Insira 30 números da matriz B: ");
	
	for (i=0; i<=29; ++i)
	scanf ("%d", &B[i]);
	}
	
	int juncao (int *A, int *B, int *C)
	{	int i;
	for (i=0; i<=29; i++)
	C[i] = A[i];
	
	for (i=0; i<=29; i++)
	C[i+30] = B[i];  	
	}
	
	int exibe (int *C)
	{	int i;
	for (i=0; i<=59; ++i)
	printf ("\n C é igual a: %d ", *C);
	getch ();
	}
	
