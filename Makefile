NAME = fillit

SRCS = srcs/main.c srcs/ft_solver.c srcs/ft_lists.c srcs/ft_bytes.c \
	srcs/fig_count.c srcs/ft_freeder_3.c srcs/figure_split.c srcs/bmc.c \
	srcs/file_valid.c srcs/figure_valid.c srcs/filrd.c srcs/ft_strsplit_wtsp.c \
	srcs/mass_count.c srcs/ft_cntchr.c srcs/ft_freeder.c srcs/grill_valid.c $(LFT)

LFT = libft/libft.a

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C libft re
	@gcc -o $(NAME) $(FLAGS) $(SRCS) -I $(HEADER)

clean:
	@rm -f srcs/*.o
	@make -C libft fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all
