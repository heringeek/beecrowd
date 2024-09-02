#include <stdio.h>

int main () {
	
	int x, y;
	while (scanf("%d %d" ,&x ,&y) && x != y) {
		printf ("%s\n", (x < y) ? "Crescente" : "Decrescente" );
	}
	return (0);
}
