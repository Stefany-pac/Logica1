#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criar um algoritmo que efetue o cálculo de uma prestação em atraso, usando a fórmula: prest=valor + (valor * (taxa/100) * tempo).

float prestacao(int valor, int taxa, int tempo);

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int valor;
	int taxa;
	int tempo;
	float result;
	
	printf ("\n Insira o valor: ");
	scanf ("%f", &valor);
	
	printf ("\n Insira a taxa: ");
	scanf ("%f", &taxa);
	
	printf ("\n Insira o tempo: ");
	scanf ("%f", &tempo);
	
	result = prestacao (valor, taxa, tempo);
	
	printf ("\n O valor da prestação é: %f", result);
	
}

float prestacao (int valor, int taxa, int tempo)
{
	 float I;
	 
	 I=valor + (valor * (taxa/100) * tempo);
	 return I;
}
