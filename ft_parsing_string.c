/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:20:22 by alvutina          #+#    #+#             */
/*   Updated: 2024/05/06 09:20:27 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parsing_string(va_list args, char *str, size_t *counter)
{
	if (*str == 'd' || *str == 'i')
		ft_putnbr_new(va_arg(args, int), counter);
	else if (*str == 'c')
		ft_putchar_new(va_arg(args, int), counter);
	else if (*str == 's')
		ft_putstr_new(va_arg(args, char *), counter);
	else if (*str == 'p')
		ft_putpointer(va_arg(args, void *), counter);
	else if (*str == 'u')
		ft_putunsint(va_arg(args, unsigned int), counter);
	else if (*str == 'x')
		ft_puthex(va_arg(args, unsigned int), counter, 'x');
	else if (*str == 'X')
		ft_puthex(va_arg(args, unsigned int), counter, 'X');
	else if (*str == '%')
		ft_putchar_new(*str, counter);
}
