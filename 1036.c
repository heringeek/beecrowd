#include <stdio.h>
#include <math.h>


double calc_delta(double a, double b, double c)
{
	double delta = 0.0;

	delta = (pow(b,2) - 4 * a * c);
	if (delta < 0) 
	{
		printf("Impossivel calcular\n");
	}
	delta = sqrt(delta);
	return (delta);
}

double calc_div(double a)
{
	double dv;

	dv = 2.0 * a;
	if (dv == 0) 
	{
		printf("Impossivel calcular\n");
	}
	return (dv); 
}

double baskhara(double delta, double div, double b, int flag)
{
	double baskhara;

	if (flag == 0)
	{
		baskhara = (-b+delta)/div;
		return (baskhara);
	}
	else
	{
		baskhara = (-b-delta)/div;
		return (baskhara);
	}
}

int main ()
{
	double a, b, c, delta , dv;
	int flag = 0;
	
	scanf("%lf %lf %lf" ,&a ,&b ,&c);
	dv = calc_div(a);
	delta = calc_delta(a, b, c);
	if (dv != 0 && delta >= 0)
	{
		printf("R1 = %.5lf\n" ,baskhara(delta, dv, b, flag));
		flag = 1;
		printf("R2 = %.5lf\n" ,baskhara(delta, dv, b, flag));
	}
	return (0);
}
