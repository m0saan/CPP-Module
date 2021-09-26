NAME=span
CC=clang++
CFLAGS= -Wall -Wextra -Werror
STDCPP= -std=c++98

SRCS = MutantStack.hpp main.cpp MutantStack.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(STDCPP) $(CFLAGS) $(SRCS) -o $(NAME) -fsanitize=address

clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all
