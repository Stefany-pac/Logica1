#include <stdio.h>
#include <locale.h>

// Uma cooperativa de leite paga, a cada um de seus produtores cooperados, por volume de leite entregue diariamente. Devido � grande quantidade de fraudes 
// (adicionamento de �gua ao leite, por exemplo) e erros na leitura do volume dos tarros de leite, a cooperativa come�ar� a pag�-los por massa. Para isso comprou 
// uma balan�a e um dens�metro e necessitar� de um algoritmo para c�lculo. Na balan�a ser�o jogados e misturados os conte�dos de todos os tarros de leite de um determinado produtor.
//  A balan�a informar� a massa e o dens�metro a densidade. O algoritmo receber�, via teclado, esses dois dados mais o pre�o por kg de leite vigente naquele dia. Ap�s isto, o 
// algoritmo dever� apresentar em tela:

// a)   Os valores digitados;
// b)   O volume de leite calculado (volume = massa / densidade);
// c)   O valor em Reais a ser pago a aquele cooperado;
// d) Classificar o leite do cooperado dentro de uma das 3 faixas de densidade existentes:
// o Categoria I (abaixo de 1,14 kg/l);
// o Categoria II (entre 1,14 e 1,20 kg/l);
// o Categoria III (acima de 1,20 kg/l).

int main ()
{	setlocale (LC_ALL, "Portuguese");

	float massa, densidade, volume, preco, valor;

	printf ("Massa: ");
	scanf ("%f", &massa);
	printf ("Densidade: ");
	scanf ("%f", &densidade);
	printf ("Pre�o por kg: ");
	scanf ("%f", &preco);
	
	volume = massa / densidade;
	valor = preco * massa;
	
	printf ("\n\n\t O volume � %f", volume);
	printf ("\n\n\t O pre�o � %f", preco);
	
	if (densidade<1.14)
	
		printf ("\n\t\t\t Categoria I");
		
	else if (densidade>1.14 && densidade<1.20)
	
		printf ("\n\t\t\t Categoria II");
		
	else
	
		printf ("\n\t\t\t Categoria III");
}
