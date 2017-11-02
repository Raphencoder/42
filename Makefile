# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Raphael <raphaelkriefbm@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/26 13:55:42 by Raphael           #+#    #+#              #
#    Updated: 2017/10/26 15:13:03 by Raphael          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 				libft.a

SRC =				ft_putchar.c \
					ft_putstr.c \
					ft_memset.c \

OBJ =				$(SRC: .c=.o)

// FLAG : 			-Wall -Werror -Wextra

HEADER = libft.h


COMMAND =			
				
		
all :				
					gcc -c $(SRC) $(HEADER)
					ar rc $(NAME) $(OBJ)
					ranlib $(NAME)

		
		
clean : 			rm -rf $(OBJ)
		
fclean :			clean 
					rm -rf $(NAME)

re : 				fclean all

		
