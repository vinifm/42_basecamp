#include <unistd.h>

void	ft_putchar(char c);
void	ft_if(int c, int l, int x, int y);

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y && c <= x)
	{
		while (c <= x)
		{
			ft_if(c, l, x, y);
			c++;
		}
		c = 1;
		ft_putchar('\n');
		l++;
	}
}

void	ft_if(int c, int l, int x, int y)
{
	if (l == 1 && (c == 1 || c == x))
	{
		ft_putchar('A');
	}
	else if ((l == y) && (c == 1 || c == x))
	{
		ft_putchar('C');
	}
	else if ((l == 1 || l == y) || (c == 1 || c == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
