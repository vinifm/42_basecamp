#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 1;
	printf("%d\n%d\n\n", a, b);
	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
	return(0);
}
