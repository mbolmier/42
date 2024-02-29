# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 20:31:22 by mbolmier          #+#    #+#              #
#    Updated: 2024/02/29 20:40:25 by mbolmier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
NAME	=	libftprintf.a

# Compiler and Flags
CC	= cc
FLAGS	= -Wall -Werror -Wextra

# Files
SRC_FILES	=	ft_printf.c		\
				characters.c	\
				numbers.c

HEADER		=	ft_printf.h

OBJS		=	$(SRC_FILES:.c=.o)
# Rules
%.o: %.c	$(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
