# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 11:40:20 by ycao              #+#    #+#              #
#    Updated: 2017/01/23 13:44:16 by ycao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_*.c

HEADER = ./includes


all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER) 
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
