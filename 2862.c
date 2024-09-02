#include <stdio.h>

int main () {
	
	int x, n;
	scanf ("%d" ,&x);
	for (int i = 0; i < x; i++) {
		scanf ("%d" ,&n);
		printf ("%s\n", (n > 8000) ? "Mais de 8000!" : "Inseto!");
	}
	return (0);
}
