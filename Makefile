# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daikim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 15:25:19 by daikim            #+#    #+#              #
#    Updated: 2020/02/19 10:53:47 by daikim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = *.c
OBJECTS = *.o
INCLUDE = ./

all: $(NAME)

 $(NAME):
	gcc -c -Wall -Werror -Wextra $(FILES) -I $(INCLUDE)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all
