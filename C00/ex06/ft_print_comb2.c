#include <unistd.h>

void	ft_putchar(char c);
void	ft_putint(int a, int b);
void	ft_whileif(int d1, int u1, int d, int u);

void	ft_print_comb2(void)
{
	int	d;
	int	u;
	int	d1;
	int	u1;

	d1 = 0;
	while (d1 <= 9)
	{
		u1 = 0;
		while (u1 <= 9)
		{
			d = 0;
			while (d <= 9)
			{
				u = 0;
				ft_whileif(d1, u1, d, u);
				d++;
			}
			u1++;
		}
		d1++;
	}
}

void	ft_whileif(int d1, int u1, int d, int u)
{
	while (u <= 9)
	{
		if ((d1 * 10) + u1 == 98 && (d * 10) + u == 99)
		{
			ft_putint(9, 8);
			ft_putchar(' ');
			ft_putint(9, 9);
		}
		else if ((d1 * 10) + u1 < (d * 10) + u)
		{
			ft_putint(d1, u1);
			ft_putchar(' ');
			ft_putint(d, u);
			ft_putchar(',');
			ft_putchar(' ');
		}
		u++;
	}	
}

void	ft_putint(int i1, int i0)
{
	char	c1;
	char	c0;

	c1 = i1 + '0';
	c0 = i0 + '0';
	ft_putchar(c1);
	ft_putchar(c0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
