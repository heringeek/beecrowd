#include <stdio.h>

int main ()
{
	int note;

	scanf ("%d", &note);
	if (note == 0) 			printf ("E\n");
	if (note >= 1 && note <= 35) 	printf ("D\n");
	if (note >= 36 && note <= 60) 	printf ("C\n");
	if (note >= 61 && note <= 85) 	printf ("B\n");
	if (note >= 86) 		printf ("A\n");
}

