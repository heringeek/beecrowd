#include <stdio.h>

int main ()
{
	int n, lower, pos = 0;

	scanf("%d" ,&n);
	int array[n];

	for (int i = 0; i < n ; i++)
	{
		scanf("%d" ,&array[i]);
		if (array[i] < lower || i == 0) 
		{
			lower = array[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\n" ,lower);
	printf("Posicao: %d\n" ,pos);
	return (0);
}
