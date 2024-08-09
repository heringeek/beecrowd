#include <stdio.h>

int main ()
{
	int n, i;
	char *ph;

	ph = "PUM";
	
	i = 1;
	scanf("%d", &n);
	while (n-- > 0)
	{
		printf("%d %d %d %s\n", i, i+1, i+2, ph);
		i += 4;
	}
}
