CC = gcc -Wall -Werror -Wextra -g

NAME = so_long

LIB = ./librairies/minilibx/libmlx.a

SRC =  \

OBJ = $(SRC:.c=.o)

all : $(NAME)

MLX = ./librairies/minilibx/libmlx.a

%.o : %.c
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean :
	rm -rf $(OBJ)

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY : all clean bonus fclean re
