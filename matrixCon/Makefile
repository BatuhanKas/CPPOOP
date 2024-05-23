# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:55:08 by bkas              #+#    #+#              #
#    Updated: 2024/05/22 17:33:54 by bkas             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = matrix

SRC         = Matrix.cpp main.cpp

SRCDIR      = ./

OBJDIR      = ./obj

OBJ         = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(BASE)))

BASE        = $(basename $(notdir $(SRC)))

CC          = g++ -Wall -Wextra -Werror

CFLAGS      = -g

RM          = rm -f

ECHO        = echo

# define progress_bar
#     local PBAR PDONE PLEFT PSEQ PEMPTY PFILL
#     PBAR=$(echo "$1 * 100 / $2 * 100 / 100" | bc)
#     PDONE=$(echo "$PBAR * 3 / 10" | bc)
#     PLEFT=$(echo "30 - $PDONE" | bc)
#     PSEQ=$(seq 0 1 $PLEFT 2>/dev/null)
#     PEMPTY=$(if [ "$1" -ne "$2" ]; then printf ".%.0s" $PSEQ; fi)
#     PFILL=$(printf "\033[1;34m█%.0s" $(seq 1 $PDONE))
#     printf "\r[%s%s] %s%% - [%s/%s]" "$PFILL" "$PEMPTY" "$PBAR" "$1" "$2"
# endef

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@$(ECHO) "\033[0;32m> Matrix Project Compiled\033[0m"

$(OBJDIR):
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) [\033[0;32mOK\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) [\033[0;7;31mError\033[0;1;30m]\033[0m"

clean:
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Matrix Directory cleaned\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Matrix Binaries removed\033[0m"

re: fclean all

.PHONY: all clean fclean re
