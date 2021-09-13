NAME=claptrap
CC=clang++
CFLAGS=-Wall -Wextra -Werror
CPP_VERSION=-std=c++98
SRCS = ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CPP_VERSION) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all