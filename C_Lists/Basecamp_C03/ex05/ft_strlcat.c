unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}
