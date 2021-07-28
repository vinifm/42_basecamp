#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%lu ", strlen(""));
	printf("%d\n", ft_strlen(""));

	printf("%lu ", strlen("	"));
	printf("%d\n", ft_strlen("	"));

	printf("%lu ", strlen("12345"));
	printf("%d\n", ft_strlen("12345"));
}

/*
The  strlen() function calculates the length of the 
string pointed to by s, excluding the terminating 
null byte ('\0').
*/
