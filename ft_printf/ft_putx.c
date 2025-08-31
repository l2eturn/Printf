/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 04:14:14 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 04:14:14 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned long nb, char c)
{
	char	*basehex;
	int		printed_count;

	printed_count = 0;
	basehex = "0123456789abcdef";
	if (c == 'X')
		basehex = "0123456789ABCDEF";
	if (nb >= 16)
		printed_count += ft_putx(nb / 16, c);
	printed_count += ft_putchr(basehex[nb % 16]);
	return (printed_count);
}
