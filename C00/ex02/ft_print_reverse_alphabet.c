#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;
	char	a;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		ft_putchar(z);
		z--;
	}
}
