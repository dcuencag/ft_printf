#include "ft_printf.h"

int	ft_print_u(unsigned int nbr, int *count)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
		(*count)++;
	}
	if (nbr > 9)
	{
		ft_print_u(nbr / 10, count);
	}
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
	(*count)++;
	return (*count);
}