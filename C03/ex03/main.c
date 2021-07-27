#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest0[9] = "0123";
	char	src[5] = "4567";

	char	dest[9] = "0123";

	int nb = 5;
	
	printf("%s\n", strncat(dest0, src, nb));
	printf("%s\n\n", ft_strncat(dest, src, nb));

	char	dest1[7] = "hello ";
	char	src1[6] = "world";

	char	dest2[5] = "sad ";

	printf("%s\n", strncat(dest1, src1, nb));
	printf("%s\n\n", ft_strncat(dest2, src1, nb));
	return (0);
}

/*
Appends the first num characters of source 
to destination, plus a terminating null-character.

If the length of the C string in source is less 
than num, only the content up to the terminating 
null-character is copied.
*/
