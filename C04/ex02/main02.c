#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-12);	
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(9);
	printf("\n");
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
}
