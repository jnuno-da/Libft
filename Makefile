# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 23:23:36 by jnuno-da          #+#    #+#              #
#    Updated: 2024/10/26 02:24:47 by jnuno-da         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a

CFLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = $(wildcard *.c)

OBJ = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f 

#Rules

all: $(NAME)

%.o: %c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	@echo "Objects deleted"

fclean:
	$(RM) $(OBJ) $(NAME)
	@echo "Libft deleted"

re: fclean all



