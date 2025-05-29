NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c
BONUS = $(shell find . -name "ft_lst*.c")
CC = cc
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o

bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re