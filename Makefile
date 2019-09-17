# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmelia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 14:32:32 by tmelia            #+#    #+#              #
#    Updated: 2019/09/17 15:11:55 by tmelia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = ft_is_opper.c ft_isdigit.c ft_lstadd.c ft_lstmap.c \
         ft_memchr.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c \
         ft_strchr.c ft_strdel.c ft_striteri.c ft_strmap.c \
         ft_strncpy.c ft_strrchr.c ft_strtrim.c ft_toupper.c \
         ft_isalnum.c ft_isprint.c ft_lstdel.c ft_lstnew.c \
         ft_memcmp.c ft_memset.c ft_putendl.c ft_putstr.c \
         ft_strclr.c ft_strdup.c ft_strjoin.c ft_strmapi.c \
         ft_strnequ.c ft_strsplit.c ft_struct_len.c \
         ft_atoi.c  ft_isalpha.c ft_itoa.c ft_lstdelone.c \
         ft_memalloc.c ft_memcpy.c ft_push_back.c ft_putendl_fd.c \
         ft_putstr_fd.c ft_strcmp.c ft_strequ.c ft_strlcat.c \
         ft_strncat.c ft_strnew.c ft_strstr.c ft_swap.c \
         ft_bzero.c ft_isascii.c ft_list_last.c ft_lstiter.c \
         ft_memccpy.c ft_memdel.c ft_putchar.c ft_putnbr.c \
         ft_strcat.c ft_strcpy.c ft_striter.c ft_strlen.c \
         ft_strncmp.c ft_strnstr.c ft_strsub.c ft_tolower.c

NAME_O = ft_is_opper.o ft_isdigit.o ft_lstadd.o ft_lstmap.o \
         ft_memchr.o ft_memmove.o ft_putchar_fd.o ft_putnbr_fd.o \
         ft_strchr.o ft_strdel.o ft_striteri.o ft_strmap.o \
         ft_strncpy.o ft_strrchr.o ft_strtrim.o ft_toupper.o \
         ft_isalnum.o ft_isprint.o ft_lstdel.o ft_lstnew.o \
         ft_memcmp.o ft_memset.o ft_putendl.o ft_putstr.o \
         ft_strclr.o ft_strdup.o ft_strjoin.o ft_strmapi.o \
         ft_strnequ.o ft_strsplit.o ft_struct_len.o \
         ft_atoi.o  ft_isalpha.o ft_itoa.o ft_lstdelone.o \
         ft_memalloc.o ft_memcpy.o ft_push_back.o ft_putendl_fd.o \
         ft_putstr_fd.o ft_strcmp.o ft_strequ.o ft_strlcat.o \
         ft_strncat.o ft_strnew.o ft_strstr.o ft_swap.o \
         ft_bzero.o ft_isascii.o ft_list_last.o ft_lstiter.o \
         ft_memccpy.o ft_memdel.o ft_putchar.o ft_putnbr.o \
         ft_strcat.o ft_strcpy.o ft_striter.o ft_strlen.o \
         ft_strncmp.o ft_strnstr.o ft_strsub.o ft_tolower.o

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
