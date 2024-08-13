#include <stdio.h>

int main ()
{
	int date, y = 0, m = 0;

	scanf("%d" ,&date);
	while (date >= 365) {
		date -= 365;
		y++;
	}
	while (date >= 30) {
		date -= 30;
		m++;
	}
	printf ("%d ano(s)\n" ,y);
	printf ("%d mes(es)\n" ,m);
	printf ("%d dia(s)\n",date);
	return (0);
}
