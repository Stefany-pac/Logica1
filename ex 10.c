#include <stdio.h>
#include <string.h>
#include <locale.h>

//Elabore um algoritmo que utilize um array (matriz 1D) para armazenar nomes de 40 alunos, depois capture esses nomes, ordene-os em ordem crescente 
//e finalmente efetue a pesquisa.


int nomes ();
int ordenacao ();
int pesquisa ();

char A[40][60], aux[60], pesq[60];
int I, J, X;

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	menu ();
	
	getch ();
	
}
	
	int menu ()
{
	int op;
	
	do
	{
		printf ("\n\t ------------------ MENU ----------------- \n");
		printf ("\n\t 1. Nomes  \n");
		printf ("\t 2. Ordenação \n");
		printf ("\t 3. Pesquisa   \n");
		
		printf ("\n\t Entre com a opção desejada: ");
		scanf ("%i", &op);
	
	printf ("\n\t ------------------------------------------ \n");
		switch (op)
		{
			case 1: nomes (); 
				break;
			case 2: ordenacao (); 
				break;
			case 3: pesquisa (); 	
				break;
		}
	}
	while (op!=0);

}
	
int nomes ()
{
fflush (stdin);
	for (I=0; I<=39; ++I)
		
		{
			printf("\t Informe o %do. nome: ", I+1);
			fgets (A[I], 60, stdin);
			fflush (stdin);
		}
	
}
		
int ordenacao ()
{
			for (I=0; I < 39; ++I)
			for (J=I+1; J <= 39; ++J)
	{
			if ((strcmp(A[I], A[J]))>0)
  				
  				{
				  
				strcpy(aux, A[I]);
  				strcpy(A[I], A[J]);
  				strcpy(A[J], aux);
  				
			}
			
			 	
		}
	
	fflush (stdin);
            	printf ("\n A classificação alfabética é: "); 
				for (I=0; I<=39; I++)
		        printf ("\n\t%s", A[I]);
	}
	
int pesquisa ()
{ 

	printf ("\n\n\t Entre com o nome a ser pesquisado: ");
	fflush (stdin); fgets (pesq, 60, stdin);
		
		for (I=0; I <=39; I++)
		{
			if(strcmp(pesq, A[I])==0)
			{
				printf("\n\t Nome: %s", A[I]);
				
			}
		}
		
		menu();
		
	return 0;
}
