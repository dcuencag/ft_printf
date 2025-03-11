/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:38:17 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:41:24 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int nbr, int *count)
{
    char	*hex_digits;

    hex_digits = "0123456789abcdef";
    if (nbr >= 16)
    {
        ft_print_x(nbr / 16, count);
    }
    write(1, &hex_digits[nbr % 16], 1);
    (*count)++;
	return (*count);
}