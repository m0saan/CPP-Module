NAME=output
CC=g++
CFLAGS=-Wall -Wextra -Werror
STDCPP=-std=c++98

SRCS = MutantStack.hpp main.cpp MutantStack.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(STDCPP) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all