# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 14:25:28 by ealgarin          #+#    #+#              #
#    Updated: 2022/07/27 13:46:56 by ealgarin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c  srcs/ft_strcmp.c  srcs/ft_strlen.c  srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

INCLUDE = includes/ft.h

all :	${OBJ}
		ar rc libft.a ${OBJ} ${INCLUDE}

libft.a : ${OBJ}
			ar rc libft.a ${OBJ} 
clean :
			rm -rf srcs/*.o

fclean :	clean
			rm libft.a

re :	fclean all