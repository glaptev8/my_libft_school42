# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmelia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 14:32:32 by tmelia            #+#    #+#              #
#    Updated: 2019/09/16 12:23:55 by tmelia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = ft*.c
NAME_O = ft*.o
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I libft.h -c $(NAME_C)
	ar rc $(NAME) $(NAME_O)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(NAME_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
