#include <stdio.h>


int main()
{
	signed short v, t;

	while (scanf("%hd %hd", &v, &t) != EOF)
	printf("%d\n", (v*t)*2);
}


