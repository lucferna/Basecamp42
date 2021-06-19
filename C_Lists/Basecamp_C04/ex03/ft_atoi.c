int	ft_atoi(char *str)
{
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg += 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	if (neg % 2 == 0)
		neg = -1;
	else
		neg = 1;
	return (nb * neg);
}
