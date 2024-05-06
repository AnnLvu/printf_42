/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:16:19 by alvutina          #+#    #+#             */
/*   Updated: 2024/05/06 09:16:21 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_new(int n, size_t *counter)
{
	if (n == -2147483648)
	{
		ft_putstr_new("-2147483648", counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_new('-', counter);
		n = n * (-1);
	}
	if (n < 10)
	{
		ft_putchar_new(n + '0', counter);
	}
	else
	{
		ft_putnbr_new(n / 10, counter);
		ft_putnbr_new(n % 10, counter);
	}
}
