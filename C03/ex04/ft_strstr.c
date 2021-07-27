int	strchars(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	return (n - 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == strchars(to_find))
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
