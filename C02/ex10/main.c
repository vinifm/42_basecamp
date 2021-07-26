#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[17];
	char	dest0[17];
	char src[17] = "hello";
	int	n = 2;

	printf("%d, %s\n", ft_strlcpy(dest, src, n), dest);
	printf("%lu, %s\n", strlcpy(dest0, src, n), dest0);

	return(0);
}

// gcc -Wall -Werror -Wextra -lbsd main.c ft_strlcpy.c && ./a.out

/*
The strlcpy() function copies up to size - 1 
characters from the NUL-terminated string src 
to dst, NUL-terminating the result.

The strlcpy() and strlcat() functions return 
the total length of the string they tried to 
create.  For strlcpy() that means the length of src.
*/
