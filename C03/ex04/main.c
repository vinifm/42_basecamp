#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*to_find = " 14";

	printf("%s\n", strstr("012 3456 78", to_find));
	printf("%s\n", ft_strstr("012 3456 78", to_find));
	return (0);
}

/*
The  strstr()  function  finds  the  first  
occurrence of the substring needle in the
string haystack.  The terminating null bytes 
('\0') are not compared.

RETURN VALUE
These functions return a pointer to the 
beginning of the located substring,  or  NULL
if the substring is not found.
*/