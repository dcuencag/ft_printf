/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:08:19 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/11 18:59:52 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_print_c(char c, int *count);

int		ft_print_s(char *str, int *count);

int		ft_print_p(char *format, int *count);

int		ft_print_di(int nbr, int *count);

int		ft_print_u(unsigned int nbr, int *count);

int		ft_print_x_minus(unsigned int nbr, int *count);

int		ft_print_x_mayus(unsigned int nbr, int *count);

int		ft_print_percent(int *count);

#endif
