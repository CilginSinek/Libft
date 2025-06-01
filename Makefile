NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
CC = cc
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rcs $(NAME) $(OBJ)
clean:
	/bin/rm -f  $(OBJ)
fclean: clean
	/bin/rm -f $(NAME) 
re: fclean all

.PHONY: all bonus clean fclean re