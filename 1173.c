#include <stdio.h>

int main ()
{
	int x;
	int v[10] = {0};

	scanf("%d" ,&x);
	for (int i = 0; i < 10; i++)
	{
		int value = (i == 0) ? x : x * 2;
		printf("N[%d] = %d\n", i, value);
		if (i >= 1) x *= 2;
	}
	return (0);
}
