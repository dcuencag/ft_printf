#include "ft_printf.h"

int	ft_print_u(unsigned int nbr, int *count)
{
	ft_putnbr_fd(nbr, 1);
	(*count)++;
	return(*count);
}