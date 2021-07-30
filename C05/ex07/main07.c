#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d ", ft_find_next_prime(-3));
	printf("%d ", ft_find_next_prime(0));
	printf("%d ", ft_find_next_prime(1));
	printf("\n");
	printf("%d ", ft_find_next_prime(2));
	printf("%d ", ft_find_next_prime(4));
	printf("%d ", ft_find_next_prime(13));
	printf("%d ", ft_find_next_prime(10));
	printf("%d ", ft_find_next_prime(75));
	printf("%d ", ft_find_next_prime(90));
	printf("%d ", ft_find_next_prime(2147483647));
	printf("\n");
	return (0);
}

/* 2, 3, 5, 7, 11, 13, 17, 19, 23, 
29, 31, 37, 41, 43, 47, 53, 59, 61, 
67, 71, 73, 79, 83, 89, 97
*/