#include <stdio.h>

int main ()
{
	int code, quant;
	float value[6] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

	scanf("%d %d" ,&code, &quant);
	printf("Total: R$ %.2f\n" ,value[code] * quant);
	return (0);
}
