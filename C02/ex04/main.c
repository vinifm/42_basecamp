#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("aabcde"));
	printf("%d\n\n", ft_str_is_lowercase(""));

	printf("%d\n", ft_str_is_lowercase("ABCDE"));
	printf("%d\n", ft_str_is_lowercase("absd09"));
	printf("%d\n", ft_str_is_lowercase("ac\n**de"));
	printf("%d\n", ft_str_is_lowercase("abcd^&e"));
	printf("%d\n", ft_str_is_lowercase("567"));
}