void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	j;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j <= size)
		{
			if (tab[min] > tab[j])
			{
				ft_swap(&tab[min], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
