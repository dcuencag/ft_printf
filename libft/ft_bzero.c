/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:14:17 by dancuenc          #+#    #+#             */
/*   Updated: 2025/02/06 18:22:18 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, int size)
{
	char	*ptr;
	int		i;

	ptr = pointer;
	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
}
