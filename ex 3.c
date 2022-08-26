#include <stdio.h>
#include <math.h>

//Suponha que devido aos problemas de formata��o, um algoritmo de computador escrito no Brasil fornece datas (dia/m�s/ano) como se fosse um n�mero s� com 
//8 d�gitos na forma X=d1d2m1m2a1a2a3a4. Isto significa, exemplificando, que se for lido o n�mero X=11031980 ent�o a data � dia 11 do m�s 03 de 1980. 
//Por outro lado, este mesmo algoritmo escrito nos EUA fornece datas (m�s/dia/ano) como se fosse um n�mero tamb�m s� de 8 d�gitos na forma Y=m1m2d1d2a1a2a3a4.
// Isto significa que Y=11031980 significa m�s 11, dia 03 de 1980. 
//Escreva algoritmo que leia X correspondendo � data descrita no formato do Brasil (8 d�gitos) e gere Y que corresponde � mesma data descrita no 
//formato dos EUA com 8 d�gitos.

// Exemplificando, se X=25111981 ent�o Y=11251981.
//OBS1: O n�mero X de 8 d�gitos deve ser lido em uma �nica vez e n�o d�gito a d�gito e o n�mero Y de 8 d�gitos deve ser impresso em uma �nica vez, 
//n�o d�gito a d�gito!

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
