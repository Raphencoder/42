# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:25:05 by rkrief            #+#    #+#              #
#    Updated: 2017/11/07 15:33:59 by rkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				libft.a

SRC =				srcs/ft_putchar.c\
					srcs/ft_putstr.c\
					srcs/ft_strcmp.c\
					srcs/ft_strlen.c\
					srcs/ft_swap.c

FLAG =				gcc -Wall -Wextra -Werror -c -I

OBJ =				*.o

HEADER =			./includes/

all : 				$(NAME)

$(NAME) :
					$(FLAG) $(HEADER)/*.h $(SRC)
					ar rc $(NAME) $(OBJ)

clean : 
					/bin/rm -f *.o

fclean :			clean
					/bin/rm -f $(NAME)

re :				fclean $(NAME)
