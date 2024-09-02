#include <stdio.h>

int main () {
	
	char cpf[16] = {""};
	for (int i = 0; i < 15; i++) {
		scanf ("%c" ,&cpf[i]);
	}
	for (int j = 0; j < 16;) {
		if (j == 2 || j == 6 || j == 10 || j == 13) {
		printf ("%c\n" ,cpf[j]);
		j+= 2;
		} else {	
		printf ("%c" ,cpf[j]);
		j++;
		}
	}
	return (0);
}
