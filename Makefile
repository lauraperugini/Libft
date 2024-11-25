
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 17:49:19 by lperugin          #+#    #+#              #
#    Updated: 2024/11/11 17:49:20 by lperugin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .
SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")
OBJ = $(SRC:.c=.o)
SRC_BONUS = $(shell find . -name "*_bonus.c")
OBJ_BONUS = $(SRC_BONUS:.c=.o)
LIB = ar -rcs $(NAME)


all: $(NAME)

bonus: $(OBJ_BONUS)
	$(LIB) $(OBJ_BONUS)

$(NAME): $(OBJ)
	$(LIB) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

so: $(OBJ)
	$(CC) -fPIC -shared -o libft.so $(OBJ)

.PHONY: all bonus clean fclean re so




