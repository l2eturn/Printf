/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:33:24 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/01 00:33:24 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define TRUE 1
# define FALSE 0
//--------------------------------------------------
int			ft_printf(const char *fmt, ...);
int			ft_putchr(char c);
int			ft_putstr(char *s);
int			ft_checkconversion(char c);
int			ft_putnbr(long nb);
int			ft_putu(unsigned int nb);
//--------------------------------------------------
#endif