#include <stdio.h>

int ft_battle(int at, int def, int lvl, int bonus)
{
	int battle;
	
	battle = ((at + def)/2);
	if (lvl % 2 == 0) battle += bonus;
	return (battle);
}

int main ()
{
	int i, bonus, at, def, lvl;
	int at1, def1, lvl1, dabriel, guarte;

	scanf("%d" ,&i);
	while (i-- > 0)
	{
		scanf("%d" ,&bonus);
		scanf("%d %d %d" ,&at ,&def, &lvl);
		scanf("%d %d %d" ,&at1 ,&def1, &lvl1);
		dabriel = ft_battle(at, def, lvl, bonus);
		guarte = ft_battle(at1, def1, lvl1, bonus);
		if (dabriel == guarte) printf("Empate\n");
		if (dabriel > guarte) printf("Dabriel\n");
		if (guarte > dabriel) printf ("Guarte\n");
	}
	return (0);
}
