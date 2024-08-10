#include <stdio.h>

int main ()
{
	int x, y, sum, aux;

	
	scanf("%d %d" ,&x ,&y);
	while (x > 0 && y > 0)
	{
		if (x < y)
		{
			aux = y;
			y = x;
			x = aux;
		}
		sum = 0;
		for (int i = y; i <= x; i++)
		{
			printf("%d " ,i);
			sum += i;
		}
		printf("Sum=%d\n" ,sum);
		scanf("%d %d" ,&x ,&y);
		sum = 0;
	}
	return (0);
}
