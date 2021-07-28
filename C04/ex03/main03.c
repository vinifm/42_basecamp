#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str);

int	main(void)
{
	printf("%d ", atoi("-&-42*++--4290"));
	printf("%d ", ft_atoi(" --+ 42*++--4290"));
	printf("%d\n", ft_atoi(" ---\t78&--+ 42"));
	printf("\n");
	printf("%d\n", ft_atoi(" ---+--+1234ab56"));
	printf("%d\n", ft_atoi(" 84	6-5---56--+123b3"));
	printf("%d\n", ft_atoi(" 32&--+ 42*++--4290"));
	printf("%d\n", ft_atoi(" \f--42&--+ 42"));
	printf("%d\n", ft_atoi("\v --+-78&--+ 42"));
	return (0);
}
