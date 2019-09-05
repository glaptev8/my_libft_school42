# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmelia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 14:32:32 by tmelia            #+#    #+#              #
#    Updated: 2019/09/05 16:31:26 by tmelia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c
NAME_O = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o

all:
	gcc -Wall -Wextra -Werror  main.c -L. -lft -I libft.h 

lib:	
	gcc -Wall -Wextra -Werror -c $(NAME_C)
	ar rc libft.a $(NAME_O)
	ranlib libft.a
	rm -rf *.o
