#include <stdio.h>
#include <locale.h>

// Dado um n�mero inteiro positivo bin�rio X = x1 x2 x3 x4 de 4 d�gitos (com x1, x2, x3 e x4 valendo 0 ou 1), chamamos de divis�o bin�ria ao n�mero Y = y1 y2 y3 y4 
// para o qual: y1=0, y2=x1, y3=x2 e y4=x3. Exemplificando, se X=1011 ent�o Y=0101.
// Dado esse mesmo n�mero X = x1 x2 x3 x4 de 4 d�gitos, chamamos de multiplica��o bin�ria ao n�mero Z = z1 z2 z3 z4 z5 para o qual: z1=x1, z2=x2, z3=x3, z4=x4 e z5=0.
// Exemplificando, se X=1011 ent�o Z=10110. Fa�a um algoritmo que leia X e imprima Y (com 4 d�gitos) e Z (com 5 d�gitos).

int main ()
{ setlocale (LC_ALL, "portuguese");

	int X[4];
	int Y[4];
	int Z[5];
	int i = 0;

	do 
	{
	printf ("Digite o X: ", i);
	scanf("%d", &X[i]);
	i++;
	} while (i<=3);
	
		Y[0] = 0;
		Z[0] = X[0];
		Y[1] = X[0];
		Z[1] = X[1];
		Y[2] = X[1];
		Z[2] = X[2];
		Y[3] = X[2];
		Z[3] = X[3];
		Z[4] = 0;
	
	for (i=0; i<=3; i++)
	{
		printf ("\n O %d digito do X �: %d", i+1, X[i]);
	}
	
	printf ("\n\n");

	for (i=0; i<=3; i++)
	{
		printf ("\n O %d digito do Y �: %d", i+1, Y[i]);
	}
	
	printf ("\n\n");
	
	for (i=0; i<=4; i++)
	{
		printf ("\n O %d digito do Y �: %d", i+1, Z[i]);
	}

}
