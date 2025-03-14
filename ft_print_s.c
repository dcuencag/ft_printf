/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:20:46 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 16:22:06 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *str, int *count)
{
	int bytes_read;

	bytes_read = 0;
	ft_putstr_fd(str, 1);
	bytes_read = ft_strlen(str);
	(*count) += bytes_read;
	return (*count);
}
