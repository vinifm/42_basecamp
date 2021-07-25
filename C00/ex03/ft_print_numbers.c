#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	a;
	char	b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		ft_putchar(a);
		a++;
	}
}
