NAME = address
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

clean:
	@rm -f $(OBJ)
	@echo "Objects Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Executable removed"

re: fclean all
