#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(14, 5, &div, &mod);
	printf("\nValores de div e mod = %d, %d\n\n", div, mod);
	return(0);
}
