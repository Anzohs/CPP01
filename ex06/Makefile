# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 20:43:24 by hladeiro          #+#    #+#              #
#    Updated: 2025/03/31 21:51:49 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CXX = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(FLAGS)

clean:
	@rm -rf $(OBJ)
	@echo "Objects clean"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all