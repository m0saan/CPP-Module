NAME=contact
CC=clang++
CFLAGS=-Wall -Wextra -Werror

SRCS = Contact.cpp ContactConsole.cpp MyAwesomePhoneBook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all