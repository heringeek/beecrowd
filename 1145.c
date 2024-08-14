#include <stdio.h>

int main ()
{
	int x, y, j;
	
	j = 1;
	scanf("%d %d" ,&x ,&y);
	for (int i = 1; i <= y; i++) {
		if (j == x) {
			printf ("%d\n" ,i);
			j = 1;
		} else {
			printf("%d " ,i); 
			j++;
		}
	}
	return (0);
}
