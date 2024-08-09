#include <stdio.h>

int main ()
{
	int x;

	while (scanf("%d", &x))
	{
		if (x == 0) break;
		if (x % 2 == 0) printf ("%d\n" ,(x+(x+2)+(x+4)+(x+6)+(x+8)));
		else
		{
			x += 1;
			printf ("%d\n" ,(x+(x+2)+(x+4)+(x+6)+(x+8)));
		}
	}
	return 0;
}
