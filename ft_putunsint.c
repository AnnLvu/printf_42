/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:22:42 by alvutina          #+#    #+#             */
/*   Updated: 2024/05/06 09:22:52 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unint(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_unint(unsigned int n)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen_unint(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[len - (++i) - 1] = (char)(n % 10 + 48);
		n = n / 10;
	}
	str[len] = '\0';
	return (str);
}

void	ft_putunsint(unsigned int n, size_t *counter)
{
	char	*str;

	str = ft_itoa_unint(n);
	ft_putstr_new(str, counter);
	free(str);
}
