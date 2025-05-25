.PHONY: all re clean fclean tst_main

NAME := libunit.a

SRC := libunit.c
OBJ := $(patsubst %.c, %.o, $(SRC))
CC := cc
CFLAGS := -Wall -Wextra -Werror
FT_PRINTF := ./ft_printf/libftprintf.a


$(NAME): $(OBJ) $(FT_PRINTF)
	cp ft_printf/libftprintf.a $(NAME)
	ar -srv $(NAME) $?
	
$(FT_PRINTF):
	@make -C ./ft_printf/

all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)
	rm -f bonus

tst_main: $(NAME)
	cc -Wall -Wextra -Werror main_andrei.c my_f/my_f.c my_f/tests/00_my_f_tests_launcher.c my_f/tests/01_my_f_test_ok.c my_f/tests/02_my_f_test_ko.c my_f/tests/03_my_f_test_sigsegv.c my_f/tests/04_my_f_test_sigbus.c -L./ -lunit -o libunit_main
