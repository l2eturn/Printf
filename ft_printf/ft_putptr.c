/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 04:33:13 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 04:33:13 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nb)
{
	int	printed_count;

	if (!nb)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	printed_count = 0;
	printed_count += ft_putstr("0x");
	printed_count += ft_putxul(nb, 'x');
	return (printed_count);
}
