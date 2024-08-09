#include <stdio.h>

void top_bot()
{
	int i;
	i = 39;
	while (i-- > 0) printf ("-");
	printf("\n");
}

void midle()
{
	int j, n;
	j = 39;
	n = 4;
	while (n >= 0 && j >= 0)
	{
		if (j == 39) 
			printf ("|");
		if (j == 2)
		{
			printf ("|");
			printf ("\n");
			j = 39;
			n--;
		}	
		else 
		{	
			printf (" ");
			j--;
		}
	}
	
}

int main()
{

	top_bot();
	midle();
	top_bot();
	return 0;
}
