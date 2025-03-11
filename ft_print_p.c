/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:28:20 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:52:12 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(char *format, int *count)
{
	uintptr_t address;

	address = (uintptr_t)format;
	write(1, "0x", 2);
	ft_putnbr_base(address, "0123456789abcdef");
	(*count)++;
	return (*count);
}