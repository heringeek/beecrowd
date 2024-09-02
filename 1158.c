#include <stdio.h>

int main () {
	
	int x, y, soma, j, n;
	soma = 0;
	scanf ("%d" ,&n);
	while (n-- > 0) {
		scanf("%d %d" ,&x, &y);
		j = x;
		if (j % 2 != 0){
			for (int i = 0; i < y; i++) {
				soma += j;
				j+=2;
			}
		} else {
			j += 1;
			for (int i = 0; i < y; i++) {
				soma += j;
				j+=2;
			}
		}
		printf ("%d\n" ,soma);
		soma = 0;
	}
	return (0);
}
