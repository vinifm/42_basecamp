#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_printable("abc"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("019"));
	printf("%d\n", ft_str_is_printable("![_~"));
	printf("%d\n", ft_str_is_printable("abc\n"));
	printf("%d\n", ft_str_is_printable("	"));
}
