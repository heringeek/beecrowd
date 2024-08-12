#include <stdio.h>

void create_deck(int n_attribute, int n_cards, int deck[100][100])
{
	for (int i = 0; i < n_cards; i++){
		for (int j = 0; j < n_attribute; j++){
			scanf("%d" ,&deck[i][j]);
		}	
	}
}

void result_game(int deck_m[100][100], int deck_l[100][100], int choose_m, int choose_l, int attribute_sort)
{
	int result = deck_m[choose_m - 1][attribute_sort - 1] - deck_l[choose_l - 1][attribute_sort - 1];
    printf(result > 0 ? "Marcos\n" : result < 0 ? "Leonardo\n" : "Empate\n");
}

int main()
{
	int n_attribute, n_cards_l, n_cards_m;
	int attribute_sort, choose_m, choose_l;
	int deck_m[100][100], deck_l[100][100];

	while (scanf ("%d" ,&n_attribute) != EOF)
	{
		scanf("%d %d" ,&n_cards_m ,&n_cards_l);

		create_deck(n_attribute, n_cards_m, deck_m);
		create_deck(n_attribute, n_cards_l, deck_l);

		scanf("%d %d",&choose_m, &choose_l);
		scanf("%d" ,&attribute_sort);

		result_game(deck_m, deck_l, choose_m, choose_l, attribute_sort);
	}
	return (0);
}
