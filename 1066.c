#include <stdio.h>

int main () {
	
	int num, pos, neg, ev, odd, i;
	i = pos = neg = ev = odd = 0;
	while((i++ < 5) && scanf("%d" ,&num) == 1) {
		if (num < 0) neg += 1;
		if (num > 0) pos += 1;
		if (num % 2 == 0) ev += 1;
		if (num % 2 !=0) odd += 1;
	}
	printf ("%d valor(es) par(es)\n" ,ev);
	printf ("%d valor(es) impar(es)\n" ,odd);
	printf ("%d valor(es) positivo(s)\n" ,pos);
	printf ("%d valor(es) negativo(s)\n" ,neg);
	return (0);
}
