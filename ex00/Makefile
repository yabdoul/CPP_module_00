NAME = megaphone

SRCS = megaphone.cpp   

CC = c++

CFLAGS = 	-Wall -Werror -Wextra -std=c++98 -g 

OBJECTS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS) # Ensure only object files are removed

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re