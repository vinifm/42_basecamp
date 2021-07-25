#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*nbr0;
	int	**nbr1;
	int	***nbr2;
	int	****nbr3;
	int	*****nbr4;
	int	******nbr5;
	int	*******nbr6;
	int	********nbr7;
	int *********nbr;

	nbr = &nbr7;
	nbr7 = &nbr6;
	nbr6 = &nbr5;
	nbr5 = &nbr4;
	nbr4 = &nbr3;
	nbr3 = &nbr2;
	nbr2 = &nbr1;
	nbr1 = &nbr0;
	nbr0 = &a;
	a = 50;

	printf("%d, %p\n%d, %p\n", a, &a, *********nbr, nbr);

	ft_ultimate_ft(nbr);

	printf("%d, %p\n%d, %p\n", a, &a, *********nbr, nbr);
	return(0);
}
