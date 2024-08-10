#include <stdio.h>

int main ()
{
	int n, x, y, aux, sum;

	scanf("%d" ,&n);
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d %d" ,&x ,&y);
		if (x < y)
		{
			aux = y;
			y = x;
			x = aux;
		}
		for (int j = y+1; j < x; j++)
		{
			if (j % 2 != 0)
				sum += j;
		}
		printf("%d\n" ,sum);
	}
	return (0);
}
