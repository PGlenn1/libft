#include "libft.h"

int	is_in_base(char *base_from, char nbr)
{
	int i;

	i = 0;
	while (base_from[i])
	{
		if (nbr == base_from[i])
			return (1);	
		i++;
	}
	return (0);
}

int	index_value(char *base_from, char nbr)
{
	int i;

	i = 0;
	if (!is_in_base(base_from, nbr))
		return (0);
	while (base_from[i] != nbr)
		i++;
	return (i);
}

int	get_len(char *base, int nbr, int index)
{
	int base_len;
	int j;
	char save;

	j = 0;
	while (base[j])
		j++;
	base_len = j;
	if (nbr < 0)
		index++;
	else if (nbr >= 0 && nbr < base_len)
		return (index + 1);
	else if (nbr > base_len)
		return (get_len(base, (nbr / base_len), str, index + 1));
}

void	put_nbr_base(char *base, int nbr, char *str, int index)
{
	int base_len;
	int j;
	char save;

	j = 0;
	while (base[j])
		j++;
	base_len = j;
	if (nbr < 0)
	{
		str[index] = '-';
		nbr *= -1;
		index++;
	}
	else if (nbr >= 0 && nbr < base_len)
		str[index] = base[nbr % base_len];
	else if (nbr > base_len)
	{
		save = base[nbr % base_len];
		put_nbr_base(base, (nbr / base_len), str, index + 1);
		str[index] = save;
	}
}