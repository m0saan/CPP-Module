NAME=output
CC=clang++
CFLAGS=-Wall -Wextra -Werror
STDCPP=-std=c++98

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(STDCPP) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all