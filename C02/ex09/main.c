#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", str);
	printf("%s\n\n", ft_strcapitalize(str));
	
	char	str1[] = "ReKt17+LOl MdR Mdr 4242l42";
	printf("%s\n", str1);
	printf("%s\n", ft_strcapitalize(str1));
	return(0);
}
