# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 03:28:33 by hladeiro          #+#    #+#              #
#    Updated: 2025/03/30 13:02:48 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = substitute
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp substitute.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(FLAGS)


clean:
	@rm -rf $(OBJ)
	@echo "Objects Removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all
