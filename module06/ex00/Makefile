# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 14:13:17 by ybouddou          #+#    #+#              #
#    Updated: 2021/10/30 12:34:24 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		converters.cpp\
		checker.cpp\

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
