#include <stdio.h>

int main()
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		scanf("%d" ,&x);
		printf("X[%d] = %d\n" , i , x > 0 ? x : 1);
	}
}
