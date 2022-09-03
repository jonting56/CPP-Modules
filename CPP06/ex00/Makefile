NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Convert.cpp main.cpp
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