#include <stdio.h>

int main ()
{
	int x, y, result, aux;

	result = 0;
	scanf("%d %d" ,&x, &y);
	if (x > y)
	{
		aux = y;
		y = x;
		x = aux;
	}
	while(x <= y){
		if (x % 13 != 0) result += x;
		x++;
	}
	printf("%d\n" ,result);
	return (0);
}
