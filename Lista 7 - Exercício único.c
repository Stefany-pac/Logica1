#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


// 1)- Considerando o cadastro de uma agenda de endereços, nomes, idade e telefones, defina a estrutura de registro apropriada, o diagrama de blocos e as codificações de um programa que efetuem as seguintes tarefas:

// a- o cadastramento das informações: nome, endereço, idade e telefone.
// b- a pesquisa da idade.
// c- a classificação por ordem alfabética
// d- a alteração de algum registro que tenha sido fornecido com erro.

// O programa em questão deverá ser projetado de tal forma que considere o uso de um menu de opções, para que o usuário selecione a opção desejada independentemente de uma ordem específica, conforme layout abaixo:

// Programa Agenda

// 1.Cadastro e registros; 2.Pesquisa de registro; 3.Classificação alfabética; 4.Alteração de registro; 5.Sair - Escolha uma opção:
	
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
    printf ("\n Escolha uma opção \n ");
    printf ("\n 1. Cadastros e registros");
    printf ("\n 2. Pesquisa de registros");
    printf ("\n 3. Classificação alfabética");
    printf ("\n 4. Alteração de registros");
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
                    
        	    printf ("\n Insira o endereço da pessoa: ");
        	    fflush (stdin);
        	    fgets (peop[i].endereco, 60, stdin);
        	        
        	    printf ("\n Insira a idade da pessoa: ");
        	    fflush (stdin);
        	    scanf ("%d", &peop[i].idade);
        	            
        	    printf ("\n Insira o telefone da pessoa: \t");
        	    fflush (stdin);
        	    fgets (peop[i].telefone, 60, stdin);
        	            
        	    printf ("\t Nome: %s", peop[i].nome);
        	    printf ("\t Endereço: %s", peop[i].endereco);
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
            	printf ("\n A idade é: %d", peop[i].idade);
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
            	printf ("\n A classificação alfabética é: "); 
				for (i=0; i<=4; i++)
		        printf ("%s ", peop[i].nome);
		        
				break;
		
	case 4: 
	
            	fflush (stdin);
            	printf ("\n Insira o nome do indivíduo a ser alterado");
           		fgets(pesquinome, 60, stdin);
         		fflush (stdin);
            
            
            	for (i=0; i <=4; i++)
            {
                if ((strcmp(pesquinome, peop[i].nome))==0)
                
            {   
				printf ("\n Insira o nome da pessoa: ");
            	fflush (stdin);
            	fgets(peop[i].nome, 60, stdin);
                        
            	printf ("\n Insira o endereço da pessoa: ");
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
		
        		printf ("\n Até mais :)");
         		fflush (stdin);
        		break;
        
    			default:
    			printf("\n Comando inválido: \n");
    			fflush (stdin);

			}   
 
			}
				while(op !=5);

getch ();
return (0);

		}

