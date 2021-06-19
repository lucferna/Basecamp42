#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	hold;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			hold = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = hold;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
