#include <stdio.h>

int main ()
{
	int n, pos = 0, neg = 0;
	while (scanf ("%d" ,&n) != EOF) {
		int players[n];
		for(int i = 1; i <= n; i++) {
			scanf("%d" ,&players[i]);
		}
		int j = 0;
		while (j++ < n) {
			(players[j] != 0) ? pos++ : neg++;
		}
		printf( "%s\n", (pos >= (2.0*n)/3.0) ? "impeachment" : "acusacao arquivada");
		pos = 0;
		neg = 0;
	}
	return (0);
}
