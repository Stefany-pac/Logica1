#include <stdio.h>
#include <locale.h>

// Uma cooperativa de leite paga, a cada um de seus produtores cooperados, por volume de leite entregue diariamente. Devido à grande quantidade de fraudes 
// (adicionamento de água ao leite, por exemplo) e erros na leitura do volume dos tarros de leite, a cooperativa começará a pagá-los por massa. Para isso comprou 
// uma balança e um densímetro e necessitará de um algoritmo para cálculo. Na balança serão jogados e misturados os conteúdos de todos os tarros de leite de um determinado produtor.
//  A balança informará a massa e o densímetro a densidade. O algoritmo receberá, via teclado, esses dois dados mais o preço por kg de leite vigente naquele dia. Após isto, o 
// algoritmo deverá apresentar em tela:

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
	printf ("Preço por kg: ");
	scanf ("%f", &preco);
	
	volume = massa / densidade;
	valor = preco * massa;
	
	printf ("\n\n\t O volume é %f", volume);
	printf ("\n\n\t O preço é %f", preco);
	
	if (densidade<1.14)
	
		printf ("\n\t\t\t Categoria I");
		
	else if (densidade>1.14 && densidade<1.20)
	
		printf ("\n\t\t\t Categoria II");
		
	else
	
		printf ("\n\t\t\t Categoria III");
}
