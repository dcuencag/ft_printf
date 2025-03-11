/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:40:29 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:59:40 by dancuenc         ###   ########.fr       */
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
	if (format == 'p')
	{
		ft_print_p(va_arg(args, char *), count);
	}
	if (format == 'd' || format == 'i')
	{
		ft_print_di(va_arg(args, int), count);
	}
	if (format == 'u')
	{
		ft_print_u(va_arg(args, unsigned int), count);
	}
	if (format == 'x')
	{
		ft_print_x(va_arg(args, unsigned int), count);
	}
	if (format == 'X')
	{
		ft_print_X(va_arg(args, unsigned int), count);
	}
	if (format == '%')
	{
		ft_print_percent(count);
	}
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
    // Test character
    ft_printf("ft_printf: format c = %c\n", 'c');
    printf("printf:    format c = %c\n\n", 'c');

    // Test string
    ft_printf("ft_printf: format s = %s\n", "here");
    printf("printf:    format s = %s\n\n", "here");

    // Test integer
    ft_printf("ft_printf: format d = %d\n", 42);
    printf("printf:    format d = %d\n\n", 42);

    // Test integer with negative value
    ft_printf("ft_printf: format d = %d\n", -42);
    printf("printf:    format d = %d\n\n", -42);

    // Test integer with INT_MAX
    ft_printf("ft_printf: format d = %d\n", INT_MAX);
    printf("printf:    format d = %d\n\n", INT_MAX);

    // Test integer with INT_MIN
    ft_printf("ft_printf: format d = %d\n", INT_MIN);
    printf("printf:    format d = %d\n\n", INT_MIN);

    // Test unsigned integer
    ft_printf("ft_printf: format u = %u\n", 42);
    printf("printf:    format u = %u\n\n", 42);

    // Test unsigned integer with negative value
    ft_printf("ft_printf: format u = %u\n", -42);
    printf("printf:    format u = %u\n\n", -42);

    // Test unsigned integer with UINT_MAX
    ft_printf("ft_printf: format u = %u\n", UINT_MAX);
    printf("printf:    format u = %u\n\n", UINT_MAX);

    // Test hexadecimal (lowercase)
    ft_printf("ft_printf: format x = %x\n", 42);
    printf("printf:    format x = %x\n\n", 42);

    // Test hexadecimal (uppercase)
    ft_printf("ft_printf: format X = %X\n", 42);
    printf("printf:    format X = %X\n\n", 42);

    // Test pointer
    ft_printf("ft_printf: format p = %p\n", &main);
    printf("printf:    format p = %p\n\n", &main);

    // Test percent sign
    ft_printf("ft_printf: format %% = %%\n");
    printf("printf:    format %% = %%\n\n");

    return 0;
}
