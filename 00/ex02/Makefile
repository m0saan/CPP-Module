NAME=account
CC=clang++
CFLAGS=-Wall -Wextra -Werror

SRCS = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all