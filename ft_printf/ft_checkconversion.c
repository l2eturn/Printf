/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 02:47:24 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 02:47:24 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkconversion(char c)
{
	char	*conversion;

	conversion = "cspdiuxX%";
	while (*conversion)
	{
		if (c == *conversion)
			return (1);
		conversion ++;
	}
	return (0);
}
