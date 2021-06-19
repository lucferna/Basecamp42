#include <unistd.h>

void	combinations(int a, int b, int c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				combinations(a, b, c);
				c++;
			}
			b++;
			c = c * 0 + (b + 1);
		}
		a++;
		b = b * 0 + (a + 1);
		c = c * 0 + (b + 1);
	}
}
