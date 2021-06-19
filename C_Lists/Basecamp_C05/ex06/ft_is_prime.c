int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime <= nb)
	{
		if (prime == nb)
			return (1);
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (0);
}
