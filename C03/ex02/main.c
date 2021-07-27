#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest0[9] = "0123 ";
	char	src0[5] = "4567";

	char	dest[9] = "0123 ";
	char	src[5] = "4567";

	printf("%s\n", strcat(dest0, src0));
	printf("%s\n", ft_strcat(dest, src));

}

/* 
The  strcat()  function  appends the src string to the dest string,
overwriting the terminating null byte ('\0') at the  end  of  dest,
and  then  adds a terminating null byte. The strings may not over‐
lap, and the dest string must have enough space for the result.
*/
