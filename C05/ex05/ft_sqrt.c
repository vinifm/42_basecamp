int	ft_sqrt(int nb)
{
	int	sq;

	sq = 0;
	while ((sq * sq) <= nb && sq <= 46340)
	{
		if (nb == sq * sq)
		{
			return (sq);
		}
		sq++;
	}
	return (0);
}
