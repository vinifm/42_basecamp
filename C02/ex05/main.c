#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABCED"));
	printf("%d\n\n", ft_str_is_uppercase(""));
	
	printf("%d\n", ft_str_is_uppercase("abcde"));
	printf("%d\n", ft_str_is_uppercase("ABC012"));
	printf("%d\n", ft_str_is_uppercase("ABC^&*ED"));
	printf("%d\n", ft_str_is_uppercase(" "));
}
