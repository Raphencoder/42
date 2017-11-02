# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/26 13:55:42 by Raphael           #+#    #+#              #
#    Updated: 2017/11/02 13:12:27 by Raphael          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 				libft.a

SRC =				ft_putchar.c \
					ft_putstr.c \
					ft_memset.c 

OBJ =				$(SRC: .c=.o)

FLAG = 				-Wall -Werror -Wextra

HEADER = 			libft.h

all	:				$(NAME)

$(NAME) : $(OBJ)
					@ar rc $(NAME) $(OBJ)

%.o : %.c
					gcc -c $(FLAG) $< -o $@
		
clean : 			rm -rf $(OBJ)
		
fclean :			clean 
					rm -rf $(NAME)

re : 				fclean all

