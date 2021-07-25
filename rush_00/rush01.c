#include <unistd.h>

void	ft_putchar(char c);
void	ft_write_body(int x);
void	ft_write_lines(int x, int current_line);

void	ft_write_body(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1 || c == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		c++;
	}
}

void	ft_write_lines(int x, int current_line)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if ((c == 1 && current_line == 1) || (c == x && current_line != 1 ))
			ft_putchar('/');
		else
		{
			if ((c == 1 && current_line != 1) || (c == x && current_line == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
		c++;
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	while (l <= y && c <= x)
	{
		if (l == 1 || l == y)
			ft_write_lines(x, l);
		else
			ft_write_body(x);
		ft_putchar('\n');
		l++;
	}
}
