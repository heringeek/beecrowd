#include <stdio.h>

void print_hour(int hour) {
	printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" ,hour / 60 , hour % 60);
}

int main()
{
	int hi, mi, hf, mf;

	scanf("%d %d %d %d" ,&hi ,&mi ,&hf ,&mf);
	int mti = (hi*60) + mi;
	int mtf = (hf*60) + mf;
	if (mti == mtf) {
		printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {
		print_hour ((mti < mtf) ? mtf - mti : (1440 - mti) + mtf);
	}
	return (0);
}
