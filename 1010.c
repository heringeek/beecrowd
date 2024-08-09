#include <stdio.h>

int main()
{
	int num, i, quant;
	float value, total;
	
	i = 0;
	while (i++ < 2)
	{
		scanf("%d %d %f", &num, &quant, &value);
		total = total + (quant*value);
	
	}
	printf("VALOR A PAGAR: R$ %.2f\n",total);
}
