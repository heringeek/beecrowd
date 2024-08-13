#include <stdio.h>

int main()
{
	int hi, mi, hf, mf, mti, mtf, hour, minute;
	mtf = mti = hour = 0;

	scanf("%d %d %d %d" ,&hi ,&mi ,&hf ,&mf);
	mti = hi + mi;
	mtf = hf + mf;
	if (mti == mtf) printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else if (hi < hf) {
		hour = hf - hi;
		if (mf > mi) {
			minute = mf - mi;
		}
		else {
			if (mi - mf == 0) {
				hour++;
				minute = 0;
			}
			if (minute > 59) {
				minute -= 59;
				hour++;
			}	
		}
		printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" ,hour ,minute);
	}
	else if (mti > mtf) {
		hour = 24 - hi + hf;
		printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" ,hour, (mi+mf));
	}
	return (0);
}
