/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:35:16 by dancuenc          #+#    #+#             */
/*   Updated: 2025/02/06 18:25:23 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	unsigned const char	*src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 == src || n <= 0)
		return (dest);
	if (dest1 > src1)
	{
		while (n)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
		return (dest);
	}
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
