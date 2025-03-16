# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 14:57:13 by yabdoul           #+#    #+#              #
#    Updated: 2025/03/16 14:57:14 by yabdoul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	megaphone

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRC_DIR		=	./
OBJ_DIR		=	./
INC_DIR		=	include/

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

SRC_FILES	=	phonebook.cpp contact.cpp 

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

#all rule
all: $(NAME)
	@printf "\n"
		@printf "$(GREEN) __     ______  _    _   _    _   ____  _    _  _      \n$(RESET)"
		@printf "$(GREEN) \ \   / / __ \| |  | | | |  | | |  _ \| |  | || |     \n$(RESET)"
		@printf "$(GREEN)  \ \_/ / |  | | |  | | | |  | | | | | | |  | || |     \n$(RESET)"
		@printf "$(GREEN)   \   /| |  | | |  | | | |  | | | | | | |  | || |     \n$(RESET)"
		@printf "$(GREEN)    | | | |__| | |__| | | |__| | | |_| | |__| || |____ \n$(RESET)"
		@printf "$(GREEN)    |_|  \____/ \____/   \____/  |____/ \____/ |______|\n$(RESET)"
		@printf "$(GREEN)                                                     \n$(RESET)"
		@printf "$(GREEN)                     yabdoul                          \n$(RESET)"
		@printf "\n"

#compile the executable
$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

#compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

#clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /ex00...$(RESET)"; else \
	echo "No objects to remove from /ex00."; \
	fi;

#fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from ex00...$(RESET)"; else \
	echo "No Executable to remove from ex00."; \
	fi;

#re rule
re: fclean all

#phony
.PHONY: all clean fclean re