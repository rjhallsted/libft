#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 09:37:14 by rhallste          #+#    #+#              #
#    Updated: 2017/09/18 10:41:57 by rhallste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

$NAME= libft



all: $(NAME)

$(NAME):
	#build library

clean:
	#rm -0 files

fclean:
	#rm all compiled files (library, etc.)

re: fclean all