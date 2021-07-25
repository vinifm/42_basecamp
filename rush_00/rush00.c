#include <unistd.h>

void	ft_putchar(char c);
void	ft_write_body(int x);
void	ft_write_lines(int x);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	while (l <= y && c <= x)
	{
		if (l == 1 || l == y)
			ft_write_lines(x);
		else
			ft_write_body(x);
		ft_putchar('\n');
		l++;
	}
}

void	ft_write_body(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1 || c == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		c++;
	}
}

void	ft_write_lines(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1 || c == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		c++;
	}
}
