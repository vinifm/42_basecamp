#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "12345";
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	n++;
	
	char	dest[n];
	char	dest0[n];
	strncpy(dest, src, 3);
	printf("String src = %s\n", src);
	printf("String dest = %s\n\n", dest);

	ft_strncpy(dest0, src, 3);
	printf("String src = %s\n", src);
	printf("String dest = %s\n", dest0);
}
