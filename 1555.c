#include <stdio.h>
#include <math.h>

int rafael(int x, int y)
{
	int rafael_value;

	rafael_value = pow((3*x),2) + pow(y , 2);
	return (rafael_value);
}

int beto(int x, int y)
{
	int beto_value;

	beto_value = 2 * pow(x,2) + pow((5*y), 2);
	return (beto_value);
}

int carlos (int x, int y)
{
	int carlos_value;

	carlos_value = (-100 * x) + pow(y, 3);
	return (carlos_value);
}

int main ()
{
	int n, x, y, rafaelf, carlosf, betof;

	scanf("%d" , &n);
	while( n-- > 0)
	{
		scanf("%d %d" ,&x ,&y);
		rafaelf = rafael(x, y);
		carlosf = carlos(x, y);
		betof = beto(x, y);
		if (rafaelf > carlosf && rafaelf > betof) printf("Rafael ganhou\n");
		else if (carlosf > rafaelf && carlosf > betof) printf("Carlos ganhou\n");
		else printf("Beto ganhou\n");
	}
	return (0);
}
