#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	if (nb <= 0)
		return (0);
	if (nb > 46340 * 46340)
		return (0);
	while (a != 1)
	{
		c = b * b;
		if (c == nb)
			return (b);
		if (c > nb)
			return (0);
		b++;
	}
	return (0);
}
