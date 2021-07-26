#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("01928"));
	printf("%d\n\n", ft_str_is_numeric(""));

	printf("%d\n", ft_str_is_numeric("012*$"));
	printf("%d\n", ft_str_is_numeric("013_\n"));
	printf("%d\n", ft_str_is_numeric("abcde"));
	printf("%d\n", ft_str_is_numeric(" "));
}
