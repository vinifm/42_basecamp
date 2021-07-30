#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d ", ft_fibonacci(-2));
	printf("%d\n", ft_fibonacci(-1));

	printf("%d ", ft_fibonacci(0));
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(3));
	printf("%d ", ft_fibonacci(4));
	printf("%d ", ft_fibonacci(5));
	printf("%d ", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));

	printf("%d ", ft_fibonacci(20));
	printf("\n");
	return(0);
}

// INT_MAX = 		2 147 483 647
// index = 46 // 	1 836 311 903
// index = 47 // 	2 971 215 073

/*
0 : 0
1 : 1
2 : 1
3 : 2
4 : 3
5 : 5
6 : 8
7 : 13
8 : 21
9 : 34
10 : 55
11 : 89
12 : 144
13 : 233
14 : 377
15 : 610
16 : 987
17 : 1597
18 : 2584
19 : 4181
20 : 6765
*/