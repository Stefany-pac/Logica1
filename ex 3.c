#include <stdio.h>
#include <math.h>

//Suponha que devido aos problemas de formatação, um algoritmo de computador escrito no Brasil fornece datas (dia/mês/ano) como se fosse um número só com 
//8 dígitos na forma X=d1d2m1m2a1a2a3a4. Isto significa, exemplificando, que se for lido o número X=11031980 então a data é dia 11 do mês 03 de 1980. 
//Por outro lado, este mesmo algoritmo escrito nos EUA fornece datas (mês/dia/ano) como se fosse um número também só de 8 dígitos na forma Y=m1m2d1d2a1a2a3a4.
// Isto significa que Y=11031980 significa mês 11, dia 03 de 1980. 
//Escreva algoritmo que leia X correspondendo à data descrita no formato do Brasil (8 dígitos) e gere Y que corresponde à mesma data descrita no 
//formato dos EUA com 8 dígitos.

// Exemplificando, se X=25111981 então Y=11251981.
//OBS1: O número X de 8 dígitos deve ser lido em uma única vez e não dígito a dígito e o número Y de 8 dígitos deve ser impresso em uma única vez, 
//não dígito a dígito!

int main ()
{	int dataBR, dataEUA, i, d, m, a, j;

	printf ("\n \t Digite a data brasileira: ");
	scanf ("%d", &dataBR);
	
	for (i=1000000; i<=31000000; i=i+1000000)
	{	if (dataBR<i+1000000 && dataBR>i-1000000)
		{	d=i;
			break;
		}
	}
	
	for (i=10000; i<=120000; i=i+10000)
	{	if (dataBR-d<i+10000 && dataBR-d>i-10000)
		{	m=i;
			break;
		}
	}
	
	a = dataBR - d - m;
	
	d /= 100;
	m *= 100;
	
	dataEUA = d + a + m;
	
	printf ("\n\n\t\t\t Data americana: %d", dataEUA);
}
