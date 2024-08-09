#include <stdio.h>

int main ()
{
	double n1, n2, n3, n4, media, exam;

	scanf("%lf %lf %lf %lf" ,&n1, &n2, &n3, &n4);
	media = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4) / 10.0;
	printf ("Media: %.1f\n", media);
	if (media >= 7.0) printf ("Aluno aprovado.\n");
	else if (media >= 5.0 && media <= 6.9)
	{
		printf ("Aluno em exame.\n");
		scanf("%lf", &exam);
		printf("Nota do exame: %.1f\n" ,exam);
		media = (media + exam) / 2;
		if (media >= 5.0) printf ("Aluno aprovado.\n");
		else printf ("Aluno reprovado.\n");
		// usando ternario:
		// printf("Aluno %s", media >= 5.0 ? "aprovado." : ""reprovado.")
		printf ("Media final: %.1f\n" ,media);

	}
	else printf("Aluno reprovado.\n");
	return (0);
}
