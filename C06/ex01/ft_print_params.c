#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void) argc;
	j = 0;
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
	return (0);
}
