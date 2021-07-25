#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int *ptr;
	int	a;

	a = 50;
	ptr = &a;

	printf("%d, %p\n", a, &a);

	ft_ft(ptr);

	printf("%d, %p\n", a, ptr);
	return(0);
}
