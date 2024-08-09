#include <stdio.h>

int main ()
{
	int x, count;
	
	scanf("%d", &count);
	while (count-- > 0)
	{
		scanf("%d", &x);
		if (x % 2 == 0) printf("0\n");
		else printf("1\n");
	}
}
