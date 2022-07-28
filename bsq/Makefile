# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 15:09:02 by ealgarin          #+#    #+#              #
#    Updated: 2022/07/27 17:50:35 by ealgarin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror
EXEC = rush-02
LIB = *.h

all: $(EXEC)

$(EXEC): *.o
	$(CC) -o $@ $^ $(CFLAGS)

main.o: $(LIB)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)