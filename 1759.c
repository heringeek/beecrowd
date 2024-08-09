#include <stdio.h>

int main ()
{
	int n;

	scanf("%d", &n);
	while (n > 0)
	{
		printf("Ho ");
		n--;
		if (n == 1) 
		{
			printf("Ho!\n");
			n--;
		}
	}	
	return 0;
}
