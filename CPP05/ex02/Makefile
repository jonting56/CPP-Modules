NAME = form
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp
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