#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


// 1)- Considerando o cadastro de uma agenda de endere�os, nomes, idade e telefones, defina a estrutura de registro apropriada, o diagrama de blocos e as codifica��es de um programa que efetuem as seguintes tarefas:

// a- o cadastramento das informa��es: nome, endere�o, idade e telefone.
// b- a pesquisa da idade.
// c- a classifica��o por ordem alfab�tica
// d- a altera��o de algum registro que tenha sido fornecido com erro.

// O programa em quest�o dever� ser projetado de tal forma que considere o uso de um menu de op��es, para que o usu�rio selecione a op��o desejada independentemente de uma ordem espec�fica, conforme layout abaixo:

// Programa Agenda

// 1.Cadastro e registros; 2.Pesquisa de registro; 3.Classifica��o alfab�tica; 4.Altera��o de registro; 5.Sair - Escolha uma op��o:
	
	struct CADASTRO_PESSOA	
	{
		
		int idade;
		char telefone[60];
		char nome[60];
		char endereco[60];
		
	};
	
	struct CADASTRO_PESSOA peop[5];

int main()

			{
	
	int i, j, A, B, pesquidade, op; 
	char pesquinome[60];
	setlocale (LC_ALL, "Portuguese");
	
	do
	
    {
    
    printf ("-------------------- AGENDA -------------------------");
    printf ("\n \n");
    printf ("\n Escolha uma op��o \n ");
    printf ("\n 1. Cadastros e registros");
    printf ("\n 2. Pesquisa de registros");
    printf ("\n 3. Classifica��o alfab�tica");
    printf ("\n 4. Altera��o de registros");
    printf ("\n 5. Sair \n ");
    scanf("%d",&op);
    
    switch (op)
    {
        case 1:
        	for (i=0; i<=4; i++)	
        	{
        	    printf ("\n Insira o nome da pessoa: ");
        	    fflush (stdin);
        	    fgets(peop[i].nome, 60, stdin);
                    
        	    printf ("\n Insira o endere�o da pessoa: ");
        	    fflush (stdin);
        	    fgets (peop[i].endereco, 60, stdin);
        	        
        	    printf ("\n Insira a idade da pessoa: ");
        	    fflush (stdin);
        	    scanf ("%d", &peop[i].idade);
        	            
        	    printf ("\n Insira o telefone da pessoa: \t");
        	    fflush (stdin);
        	    fgets (peop[i].telefone, 60, stdin);
        	            
        	    printf ("\t Nome: %s", peop[i].nome);
        	    printf ("\t Endere�o: %s", peop[i].endereco);
        	    printf ("\t Idade: %i ", peop[i].idade);
        	    printf ("\n \t Telefone: %s ", peop[i].telefone);
        	    
        	    fflush (stdin);
        	}
        	
        	break;
   	
   	case 2:
   				
        		fflush (stdin);
                printf("\n Insira o nome que deseja buscar: ");
            	fgets(pesquinome, 60, stdin);
            	fflush (stdin);
            	for (i=0; i <=4; ++i)
            {
            	if ((strcmp(pesquinome, peop[i].nome))==0)
            	printf ("\n A idade �: %d", peop[i].idade);
            }
            
            break;
         
    struct CADASTRO_PESSOA aux;  
	 
	case 3: 
	
  				for (i=0; i<=3; i++)
  				for (j=i+1; j<=4; j++)
  				if ((strcmp(peop[i].nome, peop[j].nome))>0)
  				
  				{
				  
				aux = peop[i];
  				peop[i] = peop[j];
  				peop[j] = aux;
  				
			}
			
			 	fflush (stdin);
            	printf ("\n A classifica��o alfab�tica �: "); 
				for (i=0; i<=4; i++)
		        printf ("%s ", peop[i].nome);
		        
				break;
		
	case 4: 
	
            	fflush (stdin);
            	printf ("\n Insira o nome do indiv�duo a ser alterado");
           		fgets(pesquinome, 60, stdin);
         		fflush (stdin);
            
            
            	for (i=0; i <=4; i++)
            {
                if ((strcmp(pesquinome, peop[i].nome))==0)
                
            {   
				printf ("\n Insira o nome da pessoa: ");
            	fflush (stdin);
            	fgets(peop[i].nome, 60, stdin);
                        
            	printf ("\n Insira o endere�o da pessoa: ");
            	fflush (stdin);
            	fgets (peop[i].endereco, 60, stdin);
            	        
            	printf ("\n Insira a idade da pessoa: ");
            	fflush (stdin);
            	scanf ("%d", &peop[i].idade);
            	            
            	printf ("\n Insira o telefone da pessoa: ");
            	fflush (stdin);
            	fgets (peop[i].telefone, 60, stdin);
            	
            }
            
        	}
        		break;
            
	case 5:
		
        		printf ("\n At� mais :)");
         		fflush (stdin);
        		break;
        
    			default:
    			printf("\n Comando inv�lido: \n");
    			fflush (stdin);

			}   
 
			}
				while(op !=5);

getch ();
return (0);

		}

