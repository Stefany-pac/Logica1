#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

// 1.A) Com base nas técnicas de uso de sub-rotinas e uso de variáveis globais e locais, desenvolva a solução para os seguintes exercícios:

// Considerando o cadastro de uma agenda de endereços, nomes e telefones, defina a estrutura de registro apropriada, o diagrama de blocos e as codificações de um 
// programa que efetuem as seguintes tarefas:

// a- o cadastramento das informações: nome, endereço, e-mail e telefone.
// b- a pesquisa dos nomes.
// c- a classificação por ordem alfabética
// d- a alteração de algum registro que tenha sido fornecido com erro.
// e- a remoção de elementos cadastrados.

#define QUANT 3

struct AGENDA
{
	char email[30];
	char telefone[12];
	char nome[80];
	char endereco[80];		
};
	
struct AGENDA peop[QUANT], auxiliar;
	
	int I, J, X, aux;
	char pesq[80];
	
	int cadastro ();
	int pesquisa ();
	int ordem ();
	int alteracao ();
	int remocao ();
	int menu ();
	int exibeRegistros ();
	
int main ()
{
	setlocale (LC_ALL, "Portuguese");
		
		menu();
		
	getch ();
}

int menu()
{
	int op;
	
		printf ("\n\t !------------------ MENU ----------------- \n");
		printf ("\n\t 1. Cadastro \n");
		printf ("\t 2. Pesquisa \n");
		printf ("\t 3. Ordenação \n");
		printf ("\t 4. Alteração \n");
		printf ("\t 5. Remoção \n");
		
		printf ("\n\t Entre com a opção desejada: ");
		scanf ("%i", &op);
		
		printf ("\n\t ------------------------------------------ \n");
		switch (op)
		{
			case 1: cadastro (); 
				break;
			case 2: pesquisa (); 
				break;
			case 3: ordem (); 	
				break;
			case 4: alteracao (); 
				break;
			case 5: remocao (); 
				break;
			default: break;
		}
	
	return 0;
}
	
int cadastro ()
{
	for (I=0; I <QUANT; I++)
	{			
		printf ("\n\n\t Entre com o nome: ");
		fflush (stdin); fgets (peop[I].nome, 80, stdin);
	
		printf ("\n\t Entre com o endereço: ");
		fflush (stdin); fgets (peop[I].endereco, 80, stdin);
		
		printf ("\n\t Entre com o email: ");
		fflush (stdin); fgets (peop[I].email, 30, stdin);	
		
		printf ("\n\t Entre com o telefone: ");
		fflush (stdin); fgets (peop[I].telefone, 12, stdin);
	}
		
	menu();
	
	return 0;	
}
	
int pesquisa ()
{
	printf ("\n\n\t Entre com o nome a ser pesquisado: ");
	fflush (stdin); fgets (pesq, 80, stdin);
		
		for (I=0; I <QUANT; I++)
		{
			if(strcmp(pesq, peop[I].nome)==0)
			{
				printf("\n\t Nome: %s", peop[I].nome);
				printf("\n\t Endereço: %s", peop[I].endereco);
				printf("\n\t Email: %s", peop[I].email);
				printf("\n\t Telefone: %s", peop[I].telefone);
				
				break;			
			}
		}
		
		menu();
		
	return 0;
}
	
int exibeRegistros()
{
	for(I=0; I<QUANT; I++)
	{
		printf("\n\t ---------------------------------------- \n");
		printf("\n\t Nome: %s", peop[I].nome);
		printf("\n\t Endereço: %s", peop[I].endereco);
		printf("\n\t Email: %s", peop[I].email);
		printf("\n\t Telefone: %s \n", peop[I].telefone);
		printf("\n\t ---------------------------------------- \n");
	}
	
	return 0;
}

int ordem()

{
	for(I=0; I<QUANT; I++)
	{
		for(J=0; J<(QUANT-1); J++)
		{
			if((strcmp(peop[J].nome, peop[J+1].nome))>0)
			{
				auxiliar = peop[J];
				peop[J] = peop[J+1];
				peop[J+1] = auxiliar;
				fflush (stdin);
			}
		}
	}
	
		exibeRegistros();
		
		menu();
	
	return 0;
}
	
	int alteracao ()
	
{
			fflush (stdin);
            printf ("\n\t Insira o nome do indivíduo a ser alterado: ");
           	fgets(pesq, 80, stdin); fflush (stdin);
         	
         	for (I=0; I<QUANT; I++)
         	
    		{
        		if ((strcmp(pesq, peop[I].nome))==0)
            	{
            		
            	printf ("\n\n\t Entre com o nome: ");
    			fflush (stdin); fgets (peop[I].nome, 80, stdin);
    	
    			printf ("\n\t Entre com o endereço: ");
    			fflush (stdin); fgets (peop[I].endereco, 80, stdin);
    		
    			printf ("\n\t Entre com o email: ");
    			fflush (stdin); fgets (peop[I].email, 30, stdin);	
    		
    			printf ("\n\t Entre com o telefone: ");
    			fflush (stdin); fgets (peop[I].telefone, 12, stdin);
    		
    			}
    			
                }
			
			menu ();
		
		return 0;
				
}

int remocao()
{
    printf ("\n\t Insira o nome do indivíduo a ser eliminado: ");
    fflush (stdin); fgets(pesq, 80, stdin); 
         	
        for (I=0; I<QUANT; I++)
         	
    		{
        		if ((strcmp(pesq, peop[I].nome))==0)
            	{
                    strcpy (peop[I].nome, " ");
    	
                    strcpy (peop[I].endereco, " ");
    		
                    strcpy (peop[I].email, " ");	
    		
                    strcpy (peop[I].telefone, " ");
    		
    			}
    			
                }
			
			menu ();
		
		return 0;
} 

	
	
	
