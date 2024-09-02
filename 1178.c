#include <stdio.h>

int main () {

	double x;
	int n[100] = {0};
	
	scanf("%lf" ,&x);
	for (int i = 0; i < 99; i++) {
		printf ("N[%d] = %.4lf\n" ,i , x);
		x /= 2.0;
	}
	return (0);
}
