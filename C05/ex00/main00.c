#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
	return (0);
}

// INT_MAX == 	2 147 483 647;
// 12! == 	      479 001 600;
// 13! == 	  	6 227 020 800;c