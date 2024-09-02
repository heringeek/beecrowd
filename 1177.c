#include <stdio.h>

int main () {

	int t, j;
	int v[1000] = {0};
	scanf ("%d" ,&t);
	j = 0;
	for (int i = 0; i < 1000; i++) {
		printf ("N[%d] = %d" ,i ,j);
		j++;
		if (j == t) {
			j = 0;
		}
	}
	return (0);
}
