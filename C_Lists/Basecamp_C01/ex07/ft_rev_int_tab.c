#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	pos;
	int	hold;

	i = 0;
	pos = size - 1;
	while (i < (size / 2))
	{
		hold = tab[i];
		tab[i] = tab[pos];
		tab[pos] = hold;
		i++;
		pos--;
	}
}
