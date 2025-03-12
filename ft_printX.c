/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:42:11 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:48:34 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x_mayus(unsigned int nbr, int *count)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_print_x_mayus(nbr / 16, count);
	}
	write(1, &hex_digits[nbr % 16], 1);
	(*count)++;
	return (*count);
}
