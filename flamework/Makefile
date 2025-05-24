CC = cc
CFLAGS = -Wall - Wextra -Werror
LIBFT = ./libft


all: 
	$(MAKE) -C $(LIBFT) 
	 mv ./libft/libft.a ./

clean:
	@rm -rf ./libft/objects
	@echo "clean is done"

fclean: $(clean)
	rm libft.a
