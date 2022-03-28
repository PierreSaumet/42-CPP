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

NAME			=			phonebook

################################# SOURCES ####################################

SRCS_DIR		=			./

SRCS			+=			main.cpp		\
							ClassPhonebook.cpp

################################# VARIABLES ##################################

CC				=			clang++

CFLAGS			=			-Wall -Werror -Wextra -std=c++98

OBJS_DIR		=			objs/

OBJ				=			$(SRCS:.cpp=.o)

OBJS			=			$(addprefix $(OBJS_DIR), $(OBJ))

INCLUDES		=			ClassPhonebook.hpp

################################# RULES ######################################

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp
		@mkdir -p $(OBJS_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $@
	
clean:
		@rm -rf objs/

fclean: clean
			@rm -rf $(NAME)

re:	fclean all