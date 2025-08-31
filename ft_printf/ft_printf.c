/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:21:16 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 00:21:16 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	logic_printf(char conversion, va_list args)
{
	int	printed_count;

	printed_count = 0;
	if (conversion == 'c')
		printed_count = ft_putchr(va_arg(args, int));
	else if (conversion == 's')
		printed_count = ft_putstr(va_arg(args, char *));
	else if (conversion == 'd')
		printed_count = ft_putnbr(va_arg(args, int));
	return (printed_count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		printed_count;
	int		i;

	va_start(args, fmt);
	printed_count = 0;
	i  = 0;
	while (*(fmt+i))
	{
		if (*(fmt + i) == '%' && (ft_checkconversion(*(fmt + i + 1))))
			printed_count += logic_printf(*(fmt + (i++) + 1),args);
		else if (*(fmt + i) == '%' && !(ft_checkconversion(*(fmt + i + 1))))
		{
			write(1, "Conversion Error", 17);
			return (printed_count);
		}
		else
			printed_count += ft_putchr(*(fmt + i));
		i ++;
	}
	va_end(args);
	return (printed_count);
}
			//else if (*fmt == 'p')
			//else if (*fmt == 'd')
			//else if (*fmt == 'i')
			//else if (*fmt == 'u')
			//else if (*fmt == 'x')
			//else if (*fmt == 'X')
			//else if (*fmt == '%')

