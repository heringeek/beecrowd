#include <stdio.h>

int main () {

	float s;
	float j;
	j = 2.0;
	s = 1.0;
	for (float i = 3.0; i <= 39.0; i+= 2) {
		s += (i/j);
		j *= 2;
	}
	printf ("%.2f\n" ,s);
	return (0);
}
