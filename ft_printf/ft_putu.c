/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 03:51:46 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 03:51:46 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int nb)
{
	int	printed_count;

	printed_count = 0;
	if (nb >= 10)
		printed_count += ft_putu(nb / 10);
	printed_count += ft_putchr(nb % 10 + '0');
	return (printed_count);
}
