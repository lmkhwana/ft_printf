# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 13:51:38 by lmkhwana          #+#    #+#              #
#    Updated: 2018/08/11 14:05:51 by lmkhwana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SOURCES = ft_atoi.c  \
		  ft_char_handler.c \
		  ft_o_handler.c \
		  ft_ptr_handler.c \
		  ft_digit_handler.c \
		  ft_str_handler.c \
		  ft_unsigned_digit_handler.c \
		  ft_x_handler.c \
		  ft_convert.c \
		  ft_memcpy.c \
		  ft_output.c \
		  ft_print_char.c \
		  ft_print_percent.c \
		  ft_print_str.c \
		  ft_print_wchar.c \
		  ft_print_wstr.c \
		  ft_printf.c \
		  ft_strchr.c \
		  ft_strdel.c \
		  ft_strdup.c \
		  ft_strlen.c \
		  ft_strsub.c
HEADER = ft_printf.h
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SOURCES) -I $(HEADER)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
