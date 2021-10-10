# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 19:37:49 by ybouddou          #+#    #+#              #
#    Updated: 2021/10/10 17:02:37 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Materia
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\
		MateriaSource.cpp\

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
