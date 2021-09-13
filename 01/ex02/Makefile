NAME=out
CC=clang++
CFLAGS=-Wall -Wextra -Werror

SRCS = main.cpp
all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all