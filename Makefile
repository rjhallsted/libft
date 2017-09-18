#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 09:37:14 by rhallste          #+#    #+#              #
#    Updated: 2017/09/18 15:08:00 by rhallste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft
LIB=$(NAME).a

P1_SRCS=
P2_SRCS=ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c
B_SRCS=

P1_OFILES=
P2_OFILES=ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o
B_OFILES=

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(P1_SRCS) $(P2_SRCS) $(B_OFILES)
	ar rc $(LIB) $(P1_OFILES) $(P2_OFILES) $(B_OFILES)
	ranlib $(LIB)

clean:
	rm -rf $(P1_OFILES) $(P2_OFILES) $(B_OFILES)

fclean: clean
	rm -rf $(LIB)

re: fclean all