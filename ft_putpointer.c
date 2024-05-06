/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:22:15 by alvutina          #+#    #+#             */
/*   Updated: 2024/05/06 09:22:19 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlenhex(unsigned long int n)
{
	int					len;
	unsigned long int	current_pow;

	len = 1;
	current_pow = 1;
	while (n / 16 >= current_pow)
	{
		current_pow *= 16;
		len++;
	}
	return (len);
}

static char	*ft_itoahex(unsigned long int nb)
{
	char	*str;
	char	*hex_chars;
	int		len;
	int		i;

	hex_chars = "0123456789abcdef";
	len = ft_strlenhex(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[len - i - 1] = hex_chars[nb % 16];
		nb = nb / 16;
		i++;
	}
	str[len] = '\0';
	return (str);
}

void	ft_putpointer(void *p, size_t *counter)
{
	char	*str;

	if (p == NULL)
	{
		ft_putstr_new("(nil)", counter);
	}
	else
	{
		str = ft_itoahex((unsigned long int)p);
		write(1, "0x", 2);
		*counter += 2;
		ft_putstr_new(str, counter);
		free(str);
	}
}
