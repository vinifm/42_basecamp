#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int b;

	a = 14;
	int	*ptr;
	ptr = &a;

	b = 5;
	ft_ultimate_div_mod(ptr, &b);
	printf("%d, %d\n", *ptr, b);
	return(0);
}
