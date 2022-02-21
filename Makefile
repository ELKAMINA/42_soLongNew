CC = gcc -Wall -Werror -Wextra -g

NAME = so_long

SRC =  main.c\

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -Imlx -c $< -o $@

$(NAME) : $(OBJ)
	make -C mlx
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY : all clean bonus fclean re
