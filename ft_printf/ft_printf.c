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

static int	logic_printf()
{

}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	va_start(args, fmt);

	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt ++;
			if (*fmt == 'c')
				ft_putchr(va_arg(args, int));
			else if (*fmt == 's')
				ft_putstr(va_arg(args, char *));
			//else if (*fmt == 'p')
			//else if (*fmt == 'd')
			//else if (*fmt == 'i')
			//else if (*fmt == 'u')
			//else if (*fmt == 'x')
			//else if (*fmt == 'X')
			//else if (*fmt == '%')
		}
		else
			ft_putchr(*fmt);
		fmt ++;
	}
	va_end(args);
	return (1);
}
