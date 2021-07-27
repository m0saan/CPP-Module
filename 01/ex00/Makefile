NAME=zombie
CC=g++
CFLAGS=-Wall -Wextra -Werror

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@ rm $(NAME)

fclean : clean

re : fclean all