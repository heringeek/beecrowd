#include <stdio.h>

int main () {
	
	int n, x, y, z, flag;
	x = y = z = 1;
	scanf ("%d" ,&n);
	for (int i = 0; i < (n*2); i++) {
		if (i % 2 == 0) {
			printf("%d %d %d\n" ,x ,y ,z);
			y++;
			z++;
		} else { 
			printf("%d %d %d\n" ,x ,y ,z);
			x++;
			y = x*x;
			z = x * y;
			}
	}
	return (0);
}
