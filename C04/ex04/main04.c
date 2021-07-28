#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int n;

	n = 2147483647;
	ft_putnbr_base(n, "");

	ft_putnbr_base(n, "1");

	ft_putnbr_base(n, "012341");

	ft_putnbr_base(n, "012+34");
	printf("\n");

	printf("Bases válidas:\n");
	ft_putnbr_base(n, "0123456789ABCDEF");
	printf("\n");

	ft_putnbr_base(n, "abcdefghij");
	printf("\n");

	ft_putnbr_base(n, "0123456789");
	printf("\n");
	return (0);
}

/*
nb / base == quotient;	R:
...
quotient / base == 0;	R:
*/
