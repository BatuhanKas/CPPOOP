# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 16:16:41 by bkas              #+#    #+#              #
#    Updated: 2024/07/22 11:41:02 by bkas             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = complexnumbers
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = complexNumber.cpp main.cpp
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

r : re

re : fclean all

.PHONY : all clean fclean re r
