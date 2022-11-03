# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 09:26:48 by jlima             #+#    #+#              #
#    Updated: 2022/05/19 09:26:50 by jlima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

SRC 		= ft_print_char.c ft_print_hex.c ft_print_int.c \
				ft_print_pointer.c ft_print_unsigned.c ft_printf.c \
				ft_print_str.c util_func_1.c util_func_2.c \
				ft_print_perc.c

OBJS 		= $(patsubst %.c,%.o,$(SRC))

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror -I.

all: 		$(NAME)

$(NAME) : 	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:		$(OBJS)
			ar -rcs $(NAME) $(OBJS)

.PHONY: 	all clean fclean re
