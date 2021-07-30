int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	n = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size < dest_size)
	{
		return (dest_size + (size - 1));
	}
	while (dest[n] != 0)
	{
		n++;
	}
	while ((dest_size + i) < (size - 1) && src[i] != 0)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest_size + src_size);
}
