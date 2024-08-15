#include <stdio.h>

int main() {
	
	int j, n, pr;
	int p[100] = {0};

	scanf ("%d %d" ,&j ,&n);
	for (int i = 0; i < n; i++){
		scanf("%d" ,&pr);
		p[i] = pr;
		if (i > 0 && ((p[i] - p[i-1] > j) || (-1 * (p[i] - p[i -1]) > j))) {
			printf("GAME OVER\n");
			return (0);
		} else {
			if (i == (n-1)) printf ("YOU WIN\n");
		}	
	}
	return (0);
}
