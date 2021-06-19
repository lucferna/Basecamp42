int	ft_iterative_factorial(int nb)
{
	int	save;

	save = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		save = save * (nb - 1);
		nb--;
	}
	return (save);
}
