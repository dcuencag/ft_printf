/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:34:48 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:57:04 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(uintptr_t nbr, char *base)
{
	char	str[20];
	int		i;
	int		base_len;

	base_len = 16;
	i = 19;
	str[i--] = '\0';
	if (nbr == 0)
		str[i--] = '0';
	while (nbr > 0)
	{
		str[i--] = base[nbr % base_len];
		nbr /= base_len;
	}
	write(1, &str[i + 1], 19 - i);
}