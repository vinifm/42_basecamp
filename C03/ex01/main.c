#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int	n;

	n = 3;
	printf("%d ", strncmp("0-12", "013", n));
	printf("%d\n", strncmp("015", "014", n));
	
	printf("%d ", ft_strncmp("012", "013", n));
	printf("%d\n\n", ft_strncmp("015", "014", n));

	return (0);
}

/* 
Compares up to num characters of the C string str1 
to those of the C string str2. This function starts 
comparing the first character of each string. If 
they are equal to each other, it continues with the 
following pairs until the characters differ, until a 
terminating null-character is reached, or until num 
characters match in both strings, whichever happens 
first.
*/
