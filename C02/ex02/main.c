#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("abADFcdegz"));
	printf("%d\n\n", ft_str_is_alpha(""));

	printf("%d\n", ft_str_is_alpha("AabVc100degz"));
	printf("%d\n", ft_str_is_alpha("ASbc^"));
	printf("%d\n", ft_str_is_alpha("1abc\ndegz"));
	printf("%d\n", ft_str_is_alpha("012"));
}
