/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:23:54 by dancuenc          #+#    #+#             */
/*   Updated: 2025/02/06 18:26:01 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr_fd(int nb, int fd)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		count = 11;
		return (count);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		count++;
		nb = -nb;
	}
	if (nb > 9)
	{
		count++;
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
	count++;
	return (count);
}
