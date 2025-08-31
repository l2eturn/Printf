/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 03:10:40 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 03:10:40 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	printed_count;

	printed_count = 0;
	if (nb < 0 )
	{
		nb = (-1) * nb;
		printed_count += ft_putchr('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	printed_count += ft_putchr((nb % 10) + '0');
	return (printed_count);
}
