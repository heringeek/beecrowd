#include <stdio.h>

int main ()
{
	int i, x, in, out;
	in = out = 0;
	scanf("%d", &i);

	while (i-- > 0)
	{
		scanf("%d", &x);
		if (x >= 10 && x <= 20) in++;
		else out++;
	}
	printf ("%d in\n", in);
	printf ("%d out\n", out);
}
