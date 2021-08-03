NAME=a.out
CC=g++
CFLAGS=-Wall -Wextra -Werror
CPP_VERSION=-std=c++98
SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp


all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CPP_VERSION) $(CFLAGS) $(SRCS) -o $(NAME) -g3 -fsanitize=address

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all