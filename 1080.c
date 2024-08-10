#include <stdio.h>

int main ()
{
	int x, bigger, pos;
	
	bigger = pos = 0;	
	for(int i = 1; i <= 100; i++)
	{
		scanf("%d",&x);
		if (x > bigger)
		{
			bigger = x;
			pos = i;
		}
	}
	printf("%d\n" ,bigger);
	printf("%d\n" ,pos);
	return (0);
}
