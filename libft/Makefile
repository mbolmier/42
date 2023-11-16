# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 15:27:46 by mbolmier          #+#    #+#              #
#    Updated: 2023/11/15 18:37:46 by mbolmier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS	= $(FILES:.c=.o)
FILES	= ft_atoi.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_memcmp.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strchr.c ft_strnstr.c ft_strrchr.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
NAME	= libft.a
FLAGS	= -Wall -Werror -Wextra
CC		= cc 
HEADERS	= libft.h

all:	$(NAME)

%.o:    %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all fclean clean re
