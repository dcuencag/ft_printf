/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:23:18 by dancuenc          #+#    #+#             */
/*   Updated: 2025/02/06 18:25:26 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, int size)
{
	char	*ptr;
	int		i;

	ptr = pointer;
	i = 0;
	while (i < size)
	{
		ptr[i] = (char)value;
		i++;
	}
	return (pointer);
}
int	main(void)
{
	char *str = "hello";
	printf("%s\n", (char *)ft_memset(&str, 'c', 3));
}