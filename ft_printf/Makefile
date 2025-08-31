# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 01:36:27 by slimvutt          #+#    #+#              #
#    Updated: 2025/09/01 01:36:27 by slimvutt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_checkconversion.c ft_putstr.c\
	  ft_putnbr.c ft_putchr.c ft_putu.c ft_putx.c ft_putptr.c\

SRC_OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all : $(NAME)

$(NAME): $(SRC_OBJ)
		$(AR) $(NAME) $(SRC_OBJ)
clean:
		$(RM) $(SRC_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all