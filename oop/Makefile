NAME = ytclass

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = main.cpp ytclass.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re