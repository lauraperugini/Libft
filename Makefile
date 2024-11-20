
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
CFLAGS = -Wall -Wextra -Werror -I/
SRC = $(shell find . -name "*.c")
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) libft.so

re: fclean all

so: $(OBJ)
	$(CC) -fPIC -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re so




