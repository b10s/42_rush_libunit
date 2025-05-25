NAME		= real-test
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

LIBUNIT_DIR = ./libunit
LIBUNIT_A   = $(LIBUNIT_DIR)/libunit.a
LIBUNIT_H   = $(LIBUNIT_DIR)/libunit.h

LIBFT_DIR	= ./libft
LIBFT_A		= $(LIBFT_DIR)/libft.a

SRCS		= main.c \
			  launcher/00_rt_launcher.c \
			  tests/01_rt_strlen_ok.c \
			  tests/02_rt_strlen_ko.c \
			  tests/03_rt_strlen_segv.c

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
