#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	// s1 < s2 ret = -1 // the first character that does not match has a lower value in s1 than in s2
	printf("%d ", strcmp("ABC", "abc"));
	printf("%d ", strcmp("abc", "abca"));
	printf("%d ", strcmp(" ", "abca"));
	printf("%d\n", strcmp("abcd", "f"));
	
	printf("%d ", ft_strcmp("ABC", "abc"));
	printf("%d ", ft_strcmp("abc", "abca"));
	printf("%d ", ft_strcmp(" ", "abca"));
	printf("%d\n\n", ft_strcmp("abcd", "af"));

	// s1 == s2 ret = 0
	printf("%d ", strcmp("abc", "abc"));
	printf("%d\n", strcmp(" ", " "));
	
	printf("%d ", ft_strcmp("abc", "abc"));;
	printf("%d\n\n", ft_strcmp(" ", " "));

	//s1 > s2 ret = 1
	printf("%d ", strcmp("abc", "ABC"));
	printf("%d ", strcmp("abca", "abc"));
	printf("%d ", strcmp("  ", " "));
	printf("%d\n", strcmp("af", "abca"));
	
	printf("%d ", ft_strcmp("abc", "ABC"));
	printf("%d ", ft_strcmp("abca", "abc"));
	printf("%d ", ft_strcmp("  ", " "));
	printf("%d\n\n", ft_strcmp("af", "abca"));
	return (0);
}

/*
The strcmp() and strncmp() functions return an in‐
teger less than, equal to, or greater than zero if
s1  (or  the  first n bytes thereof) is found, re‐
spectively, to be  less  than,  to  match,  or  be
greater than s2.

This function starts comparing the first character of 
each string. If they are equal to each other, it 
continues with the following pairs until the characters 
differ or until a terminating null-character is reached.
*/