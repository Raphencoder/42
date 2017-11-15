# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 13:41:43 by rkrief            #+#    #+#              #
#    Updated: 2017/11/07 18:25:39 by rkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ft_display_file

FLAG =		 -Wall -Werror -Wall

SRC  =		main.c

all :			$(NAME)

$(NAME) :
					gcc $(FLAG) -o $(NAME) $(SRC)

clean :		
					rm -f *.o

fclean :	clean 
					rm -f $(NAME)

re :			fclean all
