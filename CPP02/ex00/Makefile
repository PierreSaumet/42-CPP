# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2020/08/15 11:05:30 by psaumet           #+#    #+#             #
#   Updated: 2020/08/15 18:14:06 by psaumet          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME		=		main

SRCS_DIR	=		./

SRCS		+=		main.cpp			\
					Fixed.cpp

CC			=		clang++

FLAGS		=		-Wall -Werror -Wextra -std=c++98

OBJS_DIR	=		objs/

OBJ			=		$(SRCS:.cpp=.o)

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))

INCLUDES	=		Fixed.hpp

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf objs/

fclean: clean
		rm -rf $(NAME)

re:	fclean all