#include <stdio.h>

int main ()
{
	int n, j = 0;
	double kg;

	scanf("%d" ,&n);
	for (int i = 0; i < n; i++)
	{	
		scanf("%lf" ,&kg);
		while (kg > 1)
		{
			j++;
			kg /= 2;
		}
		printf ("%d dias\n" ,j);
		j = 0;
	}
}
