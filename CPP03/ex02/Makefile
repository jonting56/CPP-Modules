NAME = fragtrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):
	@clear
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re