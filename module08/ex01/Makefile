# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 16:33:26 by ybouddou          #+#    #+#              #
#    Updated: 2021/11/04 16:33:38 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		span.cpp

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
