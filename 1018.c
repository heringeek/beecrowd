#include <stdio.h>

int main ()
{
	int n, hun, fif, twe, ten, fiv, two, one;

	hun = fif = twe = ten = fiv = two = one = 0;
	scanf("%d", &n);
	printf ("%d\n", n);
	while (n >= 100)
	{
		n -= 100;
		hun++;
	}
	while (n >= 50)
	{
		n -= 50;
		fif++;
	}
	while (n >= 20)
	{
		n -= 20;
		twe++;
	}
	while (n >= 10)
	{
		n -= 10;
		ten++;
	}
	while (n >= 5)
	{
		n -= 5;
		fiv++;
	}
	while (n >= 2)
	{
		n -= 2;
		two++;
	}
	while (n >= 1)
	{
		n -= 1;
		one++;
	}
	printf("%d nota(s) de R$ 100,00\n" ,hun);
	printf("%d nota(s) de R$ 50,00\n" ,fif);
	printf("%d nota(s) de R$ 20,00\n" ,twe);
	printf("%d nota(s) de R$ 10,00\n" ,ten);
	printf("%d nota(s) de R$ 5,00\n" ,fiv);
	printf("%d nota(s) de R$ 2,00\n" ,two);
	printf("%d nota(s) de R$ 1,00\n" ,one);
	return (0);
}
