# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:55:08 by bkas              #+#    #+#              #
#    Updated: 2024/05/13 16:15:07 by bkas             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = date

SRC         = date.cpp main.cpp

SRCDIR      = ./

OBJDIR      = ./obj

OBJ         = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(BASE)))

BASE        = $(basename $(notdir $(SRC)))

CC          = c++ -Wall -Wextra -Werror

CFLAGS      = -g

RM          = rm -f

ECHO        = echo

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@$(ECHO) "\033[0;32m> Array Project Compiled\033[0m"

$(OBJDIR):
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[C++] : Compiled $(notdir $<) [\033[0;32mOK\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[C++] : Compiled $(notdir $<) [\033[0;7;31mError\033[0;1;30m]\033[0m"

clean:
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Array Directory cleaned\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Array Binaries removed\033[0m"

re: fclean all

.PHONY: all clean fclean re
