NAME = span
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Span.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re