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

NAME		=		replace

################################# SOURCES ####################################

SRCS_DIR	=		srcs/

SRCS		=		replace.cpp

INCS_DIR	=		headers/replace.hpp

################################# VARIABLES ##################################

CC			=		clang+++

INCLUDE		=		-I $(INCS_DIR)

FLAGS		=		-Wall -Wextra -Werror -std=c++98 $(INCLUDE)

OBJS_DIR 	= 		objs/

OBJ 		= 		$(SRCS:.cpp=.o)

OBJS 		= 		$(addprefix $(OBJS_DIR), $(OBJ))

################################# RULES ######################################

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INCS_DIR)
	@mkdir -p $(OBJS_DIR)
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all