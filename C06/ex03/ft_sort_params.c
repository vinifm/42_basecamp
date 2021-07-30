#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_write(char **argv);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[j] != 0)
		{
			if (ft_strcmp(argv[i], argv[j]))
			{
				str = argv[i];
				argv[i] = argv[j];
				argv[j] = str;
			}
			j++;
		}
		i++;
	}
	ft_write(argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 || *s2 != 0)
	{
		if (*s1 < *s2)
			return (0);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_write(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
