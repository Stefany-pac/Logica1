#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criar um algoritmo que efetue o c�lculo de uma presta��o em atraso, usando a f�rmula: prest=valor + (valor * (taxa/100) * tempo).

int prestacao ();

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int valor;
	int taxa;
	int tempo;
	int result;
	
	printf ("\n Insira o valor: ");
	scanf ("%d", &valor);
	
	printf ("\n Insira a taxa: ");
	scanf ("%d", &taxa);
	
	printf ("\n Insira o tempo: ");
	scanf ("%d", &tempo);
	
	result = prestacao (&valor, &taxa, &tempo);
	
	printf ("\n O valor da presta��o �: %d", result);
	
}

 prestacao (int *valor, int *taxa, int *tempo)
{
	 int I;
	 
	 I=*valor + (*valor * (*taxa/100) * *tempo);
	 return I;
}
