#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {9, -2, -5, 3, 12};
	int size;
	int i;

	size = 5;
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("\n\n");
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
