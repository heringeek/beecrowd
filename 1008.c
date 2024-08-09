#include <stdio.h>

int main ()
{
	int id;
	float sal, hour;

	scanf("%d", &id);
	scanf("%f", &hour);
	scanf("%f", &sal);

	printf("NUMBER = %d\n", id);
	printf("SALARY = U$ %.2f\n", (sal*hour));
	return 0;

}
