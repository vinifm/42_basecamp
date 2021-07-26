#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src = "hello";
	char	dest[6];
	char	dest0[6];

	printf("%s\n", strcpy(dest, src));
	printf("%s\n\n", dest);

	printf("%s\n", ft_strcpy(dest0, src));
	printf("%s\n", dest0);
}
