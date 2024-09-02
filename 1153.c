#include <stdio.h>

int main () {

	int n, fat = 1;
	scanf("%d" ,&n);

	for(int i = n; i > 0; i--) {
		fat *= (i);
	}
	printf ("%d\n", fat);	
	return (0);
}
