#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 09:37:14 by rhallste          #+#    #+#              #
#    Updated: 2017/09/18 20:55:05 by rhallste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= 	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra

SRC_DIR		= 	srcs
P1_SRCS		=	$(addprefix $(SRC_DIR)/, 	\
				ft_atoi						\
				ft_isalnum					\
				ft_isalpha					\
				ft_isascii					\
				ft_isdigit					\
				ft_islower					\
				ft_isspace					\
				ft_isprint					\
				ft_isupper					\
				ft_tolower					\
				ft_toupper					)
P2_SRCS		=	$(addprefix $(SRC_DIR)/,	\
				ft_putchar					\
				ft_putchar_fd				\
				ft_putendl					\
				ft_putendl_fd	 			\
				ft_putnbr					\
				ft_putnbr_fd				\
				ft_putstr					\
				ft_putstr_fd				)
B_SRCS		=

SRCS		=	$(addsuffix .c, $(P1_SRCS) $(P2_SRCS) $(B_SRCS))
OBJS		=	$(addsuffix .o, $(P1_SRCS) $(P2_SRCS) $(B_SRCS))

all: $(NAME)

$(OBJS): $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all