#include <stdio.h>

int main ()
{
	int i, x, pos, bigger;

	i == 100;
	bigger = 0;
	pos = 1;
	while (i-- > 0)
	{
		scanf("%d", &x);
		if (x > bigger)
		{
			bigger = x;
			pos = i;
		}
	}
	printf("%d\n", bigger);
	printf("%d\n", pos);
	

}
