#include <stdio.h>

int main (){

	int n;
	float a, b, c, md;
	
	scanf("%d" ,&n);
	while(n-- > 0){
		scanf("%f %f %f" , &a, &b, &c);
		md = ((a * 2.0) + (b * 3.0) + (c * 5)) / 10.0;
		printf("%.1f\n" ,md);
		md = 0;
	}
	return (0);
}
