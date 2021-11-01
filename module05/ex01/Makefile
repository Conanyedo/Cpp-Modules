# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 12:38:57 by ybouddou          #+#    #+#              #
#    Updated: 2021/10/24 14:50:13 by ybouddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\

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
