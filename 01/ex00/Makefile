NAME=zombie
CC=clang++
CFLAGS=-Wall -Wextra -Werror

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all