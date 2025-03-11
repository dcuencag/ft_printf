/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:40:29 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 17:06:07 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_is(va_list args, char format, int *count)
{
	if (format == 'c')
	{
		ft_print_c(va_arg(args, int), count);
	}
	if (format == 's')
	{
		ft_print_s(va_arg(args, char *), count);
	}
// Cómo extraigo la direccion de memoria?
/* 	if (format == 'p')
	{
		char *format = va_arg(args, char *);
		char *str = NULL;
		*str = &format;
		write(1, str, 1);
		(*count)++;
	} */
	if (format == 'd' || format == 'i')
	{
		ft_print_di(va_arg(args, int), count);
	}
/* 	if (format == 'i')
	{
		int	nbr = va_arg(args, int);
		ft_putnbr_fd(nbr, 1);
		(*count)++;
	} */
// revisar en el caso de pasarle un n negativo
	if (format == 'u')
	{
		ft_print_u(va_arg(args, unsigned int), count);
	}
	if (format == 'x')
	{
		int	nbr = va_arg(args, int);
		ft_putnbr_fd(nbr, 1);
		(*count)++;
	}
	if (format == 'X')
	{
		int	nbr = va_arg(args, int);
		ft_putnbr_fd(nbr, 1);
		(*count)++;
	}
// como imprimo un %
/* 	return (*count);
	if (format == '%')
	{
		char c = '%';
		write (1, &c, 1);
	} */
	return (*count);
}

int	ft_printf(char const *str, ...)
{
	va_list args;
	va_start(args, str);
	int	count;
	
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			format_is(args, *str++, &count);
		}
		else
		{
			write(1, str++, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}

int main(void)
{
	ft_printf("format c = %c\n", 'c');
	printf("format c = %c\n\n", 'c');

	ft_printf("format c = %c\n", 'h');
	printf("format c = %c\n\n", 'h');
	
	ft_printf("format s = %s\n", "here");
	printf("format s = %s\n\n", "here");

	ft_printf("format d = %d\n", 42);
	printf("format d = %d\n\n", 42);

	ft_printf("format i = %i\n", 22);
	printf("format i = %i\n\n", 22);

	ft_printf("format p = %p\n", &main);
	printf("format p = %p\n\n", &main);

	ft_printf("format u = %u\n", -23);
	printf("format u = %u\n\n", -23);

	ft_printf("format x = %x\n", 22);
	printf("format x = %x\n\n", 22);

	ft_printf("format X = %X\n", 22);
	printf("format X = %X\n\n", 22);

	ft_printf("format %% = %%\n");
	printf("format %% = %%\n\n");

	return 0;
}
