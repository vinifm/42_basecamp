int	ft_is_prime(int nb)
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
		if (i % 2 == 0)
			i++;
		else
			i += 2;
	}
	return (1);
}
