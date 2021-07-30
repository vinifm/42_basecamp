#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d ", ft_is_prime(-2));
	printf("%d ", ft_is_prime(0));
	printf("%d ", ft_is_prime(1));
	printf("%d ", ft_is_prime(8));
	printf("%d ", ft_is_prime(10));
	printf("%d ", ft_is_prime(15));
	printf("%d ", ft_is_prime(18));
	printf("\n");

	printf("%d ", ft_is_prime(2));
	printf("%d ", ft_is_prime(3));
	printf("%d ", ft_is_prime(5));
	printf("%d ", ft_is_prime(7));
	printf("%d ", ft_is_prime(23));
	printf("%d ", ft_is_prime(29));
	printf("%d ", ft_is_prime(31));
	printf("%d ", ft_is_prime(2147483647));
	printf("\n");
	return (0);
}
