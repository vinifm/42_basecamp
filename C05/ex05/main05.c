#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d ", ft_sqrt(-2));
	printf("%d ", ft_sqrt(-1));
	printf("%d ", ft_sqrt(18));
	printf("%d ", ft_sqrt(938));
	printf("%d\n", ft_sqrt(0));
	
	printf("%d ", ft_sqrt(1));
	printf("%d ", ft_sqrt(4));
	printf("%d ", ft_sqrt(9));
	printf("%d ", ft_sqrt(16));
	printf("%d ", ft_sqrt(25));
	printf("%d\n", ft_sqrt(400));
	printf("%d\n", ft_sqrt(2147395600));
}

/*
25	5
36	6
49	7
64	8

2147395600 46340

INT_MAX 2,147,483,647
*/