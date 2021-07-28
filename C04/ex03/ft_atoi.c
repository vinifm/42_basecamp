int	ft_strlen(char	*str);

int	ft_minus(char *str, int n, int *s);

int	ft_neg(int minus, int nb);

int	ft_atoi(char *str)
{
	int	s;
	int	minus;
	int	nb;
	int	len;

	s = 0;
	minus = 0;
	nb = 0;
	len = ft_strlen(str);
	while (s < len)
	{
		minus = ft_minus(str, minus, &s);
		if (str[s] >= '0' && str[s] <= '9')
		{
			nb = (nb * 10) + (str[s] - '0');
			if (!(str[s + 1] >= '0' && str[s + 1] <= '9'))
			{
				break ;
			}
		}
		s++;
	}
	nb = ft_neg(minus, nb);
	return (nb);
}

int	ft_strlen(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		if ((!((str[n] >= 9 && str[n] <= 13) || str[n] == 32))
			&& (str[n] != '+') && (str[n] != '-')
			&& (!(str[n] >= '0' && str[n] <= '9')))
		{
			return (n);
		}
		if ((str[n] == '+' || str[n] == '-')
			&& ((str[n + 1] >= 9 && str[n + 1] <= 13) || (str[n + 1] == 32)))
		{
			return (n);
		}
		n++;
	}
	return (n);
}

int	ft_minus(char *str, int n, int *s)
{
	if (str[*s] == '-')
	{
		n++;
	}
	return (n);
}

int	ft_neg(int minus, int nb)
{
	if (minus % 2 != 0)
	{
		nb = nb * (-1);
	}
	return (nb);
}
