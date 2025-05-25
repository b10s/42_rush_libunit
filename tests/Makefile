NAME = test_runner
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	main.c \
	basic/00_launcher.c
	basic/01_test_ok.c
	basic/02_test_ko.c
	basic/03_test_segv.c
	basic/04_test_buse.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
