#include <stdio.h>

int main () {

	int t, p, j;
	j = 0;
	scanf ("%d" ,&t);
	for (int i = 0; i < 5; i++) {
		scanf ("%d" ,&p);
		if (p == t) {
			j++;
		}	
	}
	printf ("%d\n" ,j);
	return (0);
}
