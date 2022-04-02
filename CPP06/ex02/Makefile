NAME			=			identify

SRCS_DIR		=			./

SRCS			=			main.cpp

CC				=			clang++

FLAGS			=			-Wall -Werror -Wextra -I.

OBJS_DIR		=			objs/

OBJ				=			$(SRCS:.cpp=.o)

OBJS			=			$(addprefix $(OBJS_DIR), $(OBJ))

INCLUDES		=			Base.hpp A.hpp B.hpp C.hpp

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@clang++ $(|FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		@rm -rf objs/

fclean: clean
		@rm -rf $(NAME)

re:	fclean all

go: re
	valgrind ./identify