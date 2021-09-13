NAME=a.out
CC=g++
CFLAGS=-Wall -Wextra -Werror -Wshadow -Wno-shadow
CPP_VERSION=-std=c++98
SRCS = ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp main.cpp


all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) -Wshadow -Wno-shadow $(CPP_VERSION) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all