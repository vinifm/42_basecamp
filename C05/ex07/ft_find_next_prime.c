int	ft_find_prime(int nb)
{
	int	i;
	int	b;

	i = 2;
	b = (nb / 2) + 1;
	if (nb < 2)
		return (0);
	while (i < b)
	{
		if (nb % i == 0)
			return (0);
		if (i == 2)
			i++;
		else
			i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_find_prime(nb) == 0 && nb < 2147483647)
		nb++;
	return (nb);
}
