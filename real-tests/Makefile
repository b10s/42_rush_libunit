.PHONY: all re clean fclean

NAME := real_tests

SRC := main.c my_f.c tests/00_my_f_tests_launcher.c tests/01_my_f_test_ok.c \
	tests/02_my_f_test_ok.c \
	tests/03_my_f_test_ok.c \
	tests/04_my_f_test_ok.c
OBJ := $(patsubst %.c, %.o, $(SRC))
CC := cc
CFLAGS := -Wall -Wextra -Werror
FT_LIBUNIT := ../libunit/libunit.a


$(NAME): $(OBJ) $(FT_LIBUNIT)
	$(CC) $(CFLAGS) $^ -L./../libunit -lunit -o $@
	
$(FT_LIBUNIT):
	@make -C ../libunit/

all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

