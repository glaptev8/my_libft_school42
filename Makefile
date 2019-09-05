# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmelia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 14:32:32 by tmelia            #+#    #+#              #
#    Updated: 2019/09/05 17:03:00 by tmelia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = ft*.c
NAME_O = ft*.o

all:
	gcc -Wall -Wextra -Werror  main.c -L. -lft -I libft.h 

lib:	
	gcc -Wall -Wextra -Werror -c $(NAME_C)
	ar rc libft.a $(NAME_O)
	ranlib libft.a
	rm -rf *.o
