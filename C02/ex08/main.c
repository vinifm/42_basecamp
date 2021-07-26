#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "ABCD";
	char	str1[] = "Abcd&*^Efg";
	char	str2[] = "ab12 Cde89";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	return (0);
}
