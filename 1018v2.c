#include <stdio.h>

int main ()
{
	int n, notas;
	int value[] = {100, 50, 20, 10, 5, 2, 1};
	int quant[7] = {0};

	scanf ("%d" ,&n);
	printf("%d\n" ,n);
	for (int i = 0; i < 7; i++)
	{
		quant[i] = n / value[i];
		n %= value[i];
	}
	printf("%d nota(s) de R$ 100,00\n", quant[0]);
    	printf("%d nota(s) de R$ 50,00\n", quant[1]);
    	printf("%d nota(s) de R$ 20,00\n", quant[2]);
   	printf("%d nota(s) de R$ 10,00\n", quant[3]);
    	printf("%d nota(s) de R$ 5,00\n", quant[4]);
    	printf("%d nota(s) de R$ 2,00\n", quant[5]);
    	printf("%d nota(s) de R$ 1,00\n", quant[6]);
	return (0);
}
