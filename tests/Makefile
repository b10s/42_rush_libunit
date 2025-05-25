NAME = test_runner
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FWK_DIR = ../flamework
LIBFT = $(FWK_DIR)/libft/libft.a
PRINTF = $(FWK_DIR)/ft_printf/libftprintf.a
LIBS = $(LIBFT) $(PRINTF)

INCLUDES = -I$(FWK_DIR)/libft -I$(FWK_DIR)/ft_printf/includes

SRC = \
	main.c \
	test_memmove/00_basic_memmove_launcher.c\
	test_memmove/01_basic_memmove_ok.c \
	test_memmove/02_basic_memmove_ko.c \
	test_memmove/03_basic_memmove_segv.c \
	test_memmove/04_basic_memmove_bus.c \
	test_memmove/test_memmove.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) $(LIBS)

$(LIBFT):
	make -C $(FWK_DIR)/libft

$(PRINTF):
	make -C $(FWK_DIR)/ft_printf

clean:
	rm -f $(OBJ)
	make -C $(FWK_DIR)/libft clean
	make -C $(FWK_DIR)/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C $(FWK_DIR)/libft fclean
	make -C $(FWK_DIR)/ft_printf fclean

re: fclean all

test: $(NAME)
	./$(NAME)
