/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:21:26 by alvutina          #+#    #+#             */
/*   Updated: 2024/05/06 09:21:28 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);

void	ft_parsing_string(va_list args, char *str, size_t *counter);
void	ft_puthex(unsigned int n, size_t *counter, char size);
void	ft_putpointer(void *p, size_t *counter);
void	ft_putunsint(unsigned int n, size_t *counter);

void	ft_putchar_new(char c, size_t *counter);
int		ft_toupper(char c);
void	ft_putstr_new(char *str, size_t *counter);
void	ft_putnbr_new(int n, size_t *counter);

#endif
