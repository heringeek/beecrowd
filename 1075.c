#include <stdio.h>

int main ()
{
	int	x, i;

	i = 1;
	scanf ("%d", &x);
	while (i++ < 10000)
	{
		if (i % x == 2) printf ("%d\n" ,i);
	}
	return 0;
}

