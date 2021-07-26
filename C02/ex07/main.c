#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "abcde";
	char str1[] = "12abc &fg";
	
	printf("%c, %c\n", 97, (97 - 32));
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));

	return (0);
}
