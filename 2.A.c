#include <stdio.h>
#include <string.h>
#include <locale.h>

// A- Elaborar um programa que possua uma sub-rotina que efetue e permita exibir o total do somat�rio dos N primeiros n�meros inteiros, definidos por um operador. (1+2+3+...+N).

int numint ();

int main ()
{
	int numeint;
	int result;
	
	setlocale (LC_ALL, "portuguese");
	
	printf ("\n Insira o n�mero desejado: ");
	scanf ("%d", &numeint);
	
	result = numint (&numeint);
	
	printf ("\n O resultado �: %d", result);

}

int numint (int numeint)

{
	int I, soma=0;
	
 	for (I=1; I<=numeint; ++I)
 	
 	soma=soma+I;
 	
 	return soma; 
}
