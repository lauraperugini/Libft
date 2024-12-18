
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

SRC = 	ft_bzero.c	ft_calloc.c	ft_isalnum.c\
		ft_isalpha.c	ft_isascii.c	ft_isdigit.c\
		ft_isprint.c	ft_itoa.c	ft_memchr.c\
		ft_memcmp.c	ft_memcpy.c	ft_memmove.c\
		ft_memset.c	ft_putchar_fd.c	ft_putendl_fd.c\
		ft_putnbr_fd.c	ft_putstr_fd.c	ft_split.c\
		ft_striteri.c	ft_strjoin.c	ft_strlcat.c\
		ft_strlcpy.c	ft_strlen.c	ft_strmapi.c\
		ft_strncmp.c	ft_strnstr.c	ft_strtrim.c\
		ft_substr.c	ft_tolower.c	ft_atoi.c\
		ft_toupper.c	ft_strchr.c	ft_strdup.c\
		ft_strrchr.c

OBJ = $(SRC:%.c=%.o)

SRC_BONUS = ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c\
				ft_lstdelone.c	ft_lstiter.c	ft_lstlast.c\
				ft_lstmap.c	ft_lstnew.c	ft_lstsize.c

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)
		
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
