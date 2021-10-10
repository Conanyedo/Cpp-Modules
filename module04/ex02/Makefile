# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 09:28:59 by ybouddou          #+#    #+#              #
#    Updated: 2021/10/07 18:52:03 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
