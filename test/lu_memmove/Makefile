NAME = lu_memmove_test
SRC = 00_launcher.c \
	  01_basic_memmove_ok.c \
	  02_basic_memmove_ko.c \
	  03_basic_memmove_segv.c \
	  04_basic_memmove_bus.c \
	  lu_memmove.c \

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
