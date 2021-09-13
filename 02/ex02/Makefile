NAME=fixedPoint
CC=clang++
CFLAGS=-Wall -Wextra -Werror
STDCPP=-std=c++98

SRCS = Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(STDCPP) $(CFLAGS) $(SRCS) -o $(NAME) -fsanitize=address -g3

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all