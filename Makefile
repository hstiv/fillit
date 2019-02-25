NAME = fillit

SRCS = main.c figure_split.c bmc.c ft_free_3m.c file_valid.c figure_valid.c filrd.c ft_strsplit_wtsp.c $(LFT)

LFT = libft/libft.a 

HEADER = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C libft re && gcc -o $(NAME) $(FLAGS) $(SRCS)-I $(HEADER)
	ranlib $@

norm:
	norminette main.c figure_split.c bmc.c ft_free_3m.c file_valid.c filrd.c ft_strsplit_wtsp.c fillit.h 

clean:
	rm -f *.o
	make -C libft fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
