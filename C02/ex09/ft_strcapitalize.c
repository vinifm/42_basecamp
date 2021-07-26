char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

// must leave rest of world in lowcase :(