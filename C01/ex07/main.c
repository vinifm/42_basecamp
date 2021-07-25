#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int c;
	int	tab[5] = {0, 2, 5, 3, 4};

	c = 0;
	while (c < 5)
	{
		printf("%d", tab[c]);
		c++;
	}
	printf("\n");
	
	ft_rev_int_tab(tab, 5);

	c = 0;
	while (c < 5)
	{
		printf("%d", tab[c]);
		c++;
	}
	printf("\n");
}

/*
	int	tab[3];		tab == &var;		tab[0] == var;
	int	*tab2[2];	tab2[0] = &ptr;		*tab2[0] == var;

	tab[n] == *(tab + n);

	tab[2][5] == *(tab[2] + 5)
*/