#include <stdio.h>
#include <string.h>

int main () {

	int x, y, soma;

	scanf ("%d %d" ,&x ,&y);
	soma  = x + y;

	char c[soma];
	char *nc  = c;

	sprintf (c, "%d" ,soma);

	while (*nc) {
		if (*nc == '0') {
			memmove (nc, nc + 1, strlen(nc));
		} else {
			nc++;
		}
	}

	printf("%s\n" ,c);
	return (0);
}
