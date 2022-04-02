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

NAME 		=	convert

SRCS_DIR	=	srcs/

SRCS		+=	main.cpp			\
				ClassScalar.cpp

INC_DIR		=	includes/

DEPS		=	$(INC_DIR)

INCLUDE		=	-I $(INC_DIR)

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra $(INCLUDE)

OBJS_DIR	=	objs/

OBJ			=	$(SRCS:.cpp=.o)

OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))



$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INC_DIR)
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all
