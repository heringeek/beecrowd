#include <stdio.h>

int main()
{
	int x, y, aux;
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > y) 
	{
		aux = y;
		y = x;
		x = aux;
	}

	while (++x <  y)
	{
		if (x % 5 == 2 || x % 5 == 3)
			printf("%d\n", x);
	}
	return 0;
}
