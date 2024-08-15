#include <stdio.h>
#include <math.h>

int main () {
	
	float money;
	float value[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.25, 0.1, 0.05, 0.01};
	double quant[12] = {0.0};

	scanf ("%f" ,&money);
	for (int i = 0; i < 12; i++) {
		quant[i] = (int)(money / value[i]);
		money = fmod(money, value[i]); // pegar resto de divisão de double
	}

	printf ("NOTAS:\n");
	printf ("%.0f nota(s) de R$ 100.00\n" ,quant[0]);
	printf ("%.0f nota(s) de R$ 50.00\n" ,quant[1]);
	printf ("%.0f nota(s) de R$ 20.00\n" ,quant[2]);
	printf ("%.0f nota(s) de R$ 10.00\n" ,quant[3]);
	printf ("%.0f nota(s) de R$ 5.00\n"  ,quant[4]);
	printf ("%.0f nota(s) de R$ 2.00\n"  ,quant[5]);
	printf ("MOEDAS:\n");
	printf ("%.0f moeda(s) de R$ 1.00\n"    ,quant[6]);
	printf ("%.0f moeda(s) de R$ 0.50\n"    ,quant[7]);
	printf ("%.0f moeda(s) de R$ 0.25\n"    ,quant[8]);
	printf ("%.0f moeda(s) de R$ 0.10\n"    ,quant[9]);
	printf ("%.0f moeda(s) de R$ 0.05\n"    ,quant[10]);
	printf ("%.0f moeda(s) de R$ 0.01\n"    ,quant[11]);
	return (0);
}
