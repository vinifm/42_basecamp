#include <unistd.h>

int		ft_ifneg(int nbr);

int		ft_strlen(char *str);

int		ft_strcmp(char *str);

void	ft_revputstr(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		i;
	int		mod;
	char	res[13];

	b = ft_strlen(base);
	i = 0;
	if (ft_strlen(base) && ft_strcmp(base))
	{
		nbr = ft_ifneg(nbr);
		while (nbr != 0)
		{
			mod = nbr % b;
			nbr = nbr / b;
			res[i] = base[mod];
			i++;
		}
		res[i] = '\0';
		ft_revputstr(res);
	}
}

int	ft_ifneg(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	return (nbr);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	if (str[0] == 0 || str[1] == 0)
	{
		return (0);
	}
	while (str[n] != 0)
	{
		if ((str[n] == '+') || (str[n] == '-'))
		{
			return (0);
		}
		n++;
	}
	return (n);
}

void	ft_revputstr(char *str)
{
	int		n;
	int		i;
	char	c;

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	i = 0;
	while (i < n / 2)
	{
		c = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = c;
		i++;
	}
	i = 0;
	while (i <= ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		j = i + 1;
		while (str[i] != str[j] && str[j] != '\0')
		{
			j++;
		}
		if (str[i] == str[j])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
