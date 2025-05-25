NAME		= real-test
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

LIBUNIT_DIR = ./libunit
LIBUNIT_A   = $(LIBUNIT_DIR)/libunit.a
LIBUNIT_H   = $(LIBUNIT_DIR)/libunit.h

LIBFT_DIR	= ./libft
LIBFT_A		= $(LIBFT_DIR)/libft.a

SRCS = main.c \
	   project/rt_atoi.c \
	   project/rt_itoa.c \
	   project/rt_strlen.c \
	   real_test_atoi/00_rt_atoi_launcher.c \
	   real_test_atoi/01_rt_atoi_ok.c \
	   real_test_atoi/02_rt_negative_test.c \
	   real_test_atoi/03_zero_test.c \
	   real_test_atoi/04_int_max_test.c \
	   real_test_atoi/05_int_min_test.c \
	   real_test_atoi/06_invalid_test.c \
	   real_test_strlen/00_rt_strlen_launcher.c \
	   real_test_strlen/01_rt_strlen_ok.c \
	   real_test_strlen/02_rt_strlen_ko.c \
	   real_test_strlen/03_rt_strlen_segv.c \
	   real_test_strlen/04_rt_strlen_buse.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBUNIT_A)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBUNIT_A) $(LIBFT_A)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBUNIT_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(LIBUNIT_A):
	make -C $(LIBUNIT_DIR)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBUNIT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBUNIT_DIR)

re: fclean all

.PHONY: all clean fclean re
