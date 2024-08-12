#include <stdio.h>

int main ()
{
	unsigned long long p;
	scanf("%llu" ,&p);
	while(p != -1)
	{	
		printf("%llu\n" ,(p == 0) ? p : p-1);
		scanf("%llu" ,&p);
	}
	return (0);
}
