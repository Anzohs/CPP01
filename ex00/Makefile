# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/25 22:46:37 by hladeiro          #+#    #+#              #
#    Updated: 2025/03/25 22:46:39 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brains
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
