NAME = libft.a
SOURCES = ./srcs/ft_putchar.c \
		  ./srcs/ft_putstr.c \
		  ./srcs/ft_strcmp.c \
		  ./srcs/ft_strlen.c \
		  ./srcs/ft_swap.c \
OBJ = ft_*.o
FALGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -o $(FLAGS) $(SOURCES)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean clean
