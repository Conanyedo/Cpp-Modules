# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 11:10:29 by ybouddou          #+#    #+#              #
#    Updated: 2021/09/27 13:05:50 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		Fixed.cpp\

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
