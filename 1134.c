#include <stdio.h>

int main ()
{
	int n, al, gas, die;

	al = gas = die = 0;
	
	while (scanf("%d", &n) && n != 4)
	{
        	if (n == 1) al++;
        	else if (n == 2) gas++;
        	else if (n == 3) die++;
    	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n" ,al);
	printf("Gasolina: %d\n" ,gas);
	printf("Diesel: %d\n",die);
}
