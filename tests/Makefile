NAME = test_runner
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	main.c \
	test_memmove/00_launcher.c \
	test_memmove/01_basic_memmove_ok.c \
	test_memmove/02_basic_memmove_ko.c \
	test_memmove/03_basic_memmove_segv.c \
	test_memmove/04_basic_memmove_bus.c \
	test_memmove/test_memmove.c \
	../framework/load_test.c \
	../framework/launch_tests.c \
	../framework/utils.c

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
