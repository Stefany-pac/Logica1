#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

// 1.B) Desenvolver um programa que controle as notas bimestrais de 20 alunos de uma sala de aula e que efetue o cálculo da média de cada aluno, sendo que será considerado
// aprovado o aluno que obtiver média >= 7.0. O programa em questão deverá executar as seguintes rotinas:

// a - cadastrar os 20 alunos e suas notas.
// b - classificar os alunos cadastrados.
// c - corrigir alunos e/ou notas que tenham sido cadastradas com erros.
// d - pesquisar alunos por nome.
// e - listar alunos aprovados.
// f - listar alunos reprovados.


	struct AGENDA 
	{	int MED;
		int notaPP;
		int notaP;
		char nome[50];
	};

		struct AGENDA alun[20], auxiliar;
		
		int NOTAP, NOTAPP, MED, aux, I,J, op;
		char pesq [50];
		
		int menu ();
		int cadastro ();
		int exibirDados ();
		int classificacao ();
		int correcao ();
		int pesquisa ();
		int aprovados_reprovados ();

		int main ()
		{
			
			setlocale (LC_ALL, "Portuguese");
			
				menu ();
			
			getch ();
		
		}

int menu ()
{
	
	printf ("\n \t ---------- MENU ----------------- \n");
	printf ("\n\t 1. Cadastro;");
	printf ("\n\t 2. Classificação;");
	printf ("\n\t 3. Correção;");
	printf ("\n\t 4. Pesquisa;");
	printf ("\n\t 5. Lista de aprovados;");
	printf ("\n\t 6. Lista de reprovados. \n");
	
	printf ("\n\t Entre com a opção desejada: ");
	scanf ("%i", &op);
	
	printf ("\n\t  --------------------------------------- \n");

	switch (op)
	{
			case 1:cadastro (); 
				break;
			case 2: classificacao (); 
				break;
			case 3: correcao (); 	
				break;
			case 4: pesquisa (); 
				break;
			case 5: aprovados_reprovados (); 
				break;
			case 6: aprovados_reprovados (); 
				break;
		
			default: break;	
	
	}
	
	return 0;
}

int cadastro ()
{
	for (I=0; I<=1; I++)
	{
		printf ("\n\t Entre com o nome do %.do aluno: ", I+1);
		fflush (stdin); 
		fgets (alun[I].nome, 50, stdin);
		
		printf ("\n\t Entre com a nota da P1: ");
		fflush (stdin);
		scanf ("%d", &alun[I].notaPP);
		
		printf ("\n\t Entre com a nota da P2: ");
		fflush (stdin);
		scanf ("%d", &alun[I].notaP);
		
		alun[I].MED = (alun[I].notaPP+alun[I].notaP)/2;
		printf ("\n\t------------------------------------------------------------------ \n");
	}
	
	menu ();
	
	return 0;
}

int exibirDados ()
{
	for (I=0; I<=19; I++)
	
	{
			printf("\n\t Nome: %s", alun[I].nome);
			printf ("\n\t P1: %d", alun[I].notaPP);
			printf ("\n\t P2: %d", alun[I].notaP); 
			
	}
	return 0; 
}


int classificacao ()
{
	for (I=0; I <19; I++)
	{
		for(J=I+1; J<=19; J++)
		{
			if((strcmp(alun[I].nome, alun[J].nome))>0)
			{
				auxiliar = alun[I];
				alun[I] = alun[J];
				alun[J] = auxiliar;
				fflush (stdin);
			}
		}
	}	
	
		exibirDados ();
	
		menu();
	
	return 0;
}

int correcao ()
{
			fflush (stdin);
            printf ("\n\t Insira o nome do indivíduo a ser alterado: ");
           	fgets(pesq, 25, stdin); fflush (stdin);
         	
         	for (I=0; I <=19; I++)
         	
    		{
        		if ((strcmp(pesq, alun[I].nome))==0)
            	{
            		
            	printf ("\n\n\t Entre com o nome: ");
    			fflush (stdin); fgets (alun[I].nome, 50, stdin);
    	
    			printf ("Entre com a nota da P1: ");
				fflush (stdin); 
				scanf ("%d", &alun[I].notaP);
		
				printf ("Entre com a nota da P2: ");
				fflush (stdin); 
				scanf ("%d", &alun[I].notaPP);
				
				alun[I].MED = (alun[I].notaPP+alun[I].notaP)/2;
    		
    			}
    			
                }
			
			menu ();
		
		return 0;
}

int pesquisa ()
{
	printf ("\n\t Entre com o nome a ser pesquisado: ");
	fflush (stdin); fgets (pesq, 50, stdin);
		
		for (I=0; I <19; I++)
		{
			if(strcmp(pesq, alun[I].nome)==0)
			{
				printf("\n\t Nome: %s", alun[I].nome);
				printf("\n\t Nota P1: %i", alun[I].notaPP);
				printf("\n\t Nota P2: %i", alun[I].notaP);
				break;			
			}
		}
		
		menu();
		
	return 0;
	
}

int aprovados_reprovados ()
{
	
	
		fflush (stdin);
		
		for (I=0; I<=19; I++)
		
		{

					if (op==5 && alun[I].MED >= 7)
				
					printf ("\n\t O aluno %s foi aprovado com a nota de: %d \n", alun[I].nome, alun[I].MED);


			
			else if (op==6 && alun[I].MED<7)
			
				printf ("\n\t O aluno %s foi reprovado com a nota de: %d \n", alun[I].nome, alun[I].MED);
			
		
			else
				printf ("");
	
}
menu();

return 0;
}
	
