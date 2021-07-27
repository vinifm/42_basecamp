#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest1[] = "toto  ";
	char	src1[] = "toto  ";

	char	dest[] = "toto  ";
	char	src[] = "toto  ";

	printf("%s, %lu\n", dest1, strlcat(dest1, src1, 0));
	printf("%s, %d\n", dest, ft_strlcat(dest, src, 0));
	return (0);
}

// gcc -Wall -Werror -Wextra -lbsd main.c ft_strlcat.c && ./a.out

/*
The strlcpy() function copies up to size - 
1 characters from the NUL-terminated string
src to dst, NUL-terminating the result.

RETURN VALUES
The strlcpy() and strlcat() functions return 
the total length of the string they tried
to create. For strlcat() that means the initial 
length of dst plus the length of src.  While this 
may seem somewhat confusing, it was done to make 
truncation detection simple.
*/