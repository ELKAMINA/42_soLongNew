CC = gcc -Wall -Werror -Wextra -g

NAME = so_long

SRC =  main.c\
		./ext_func/ft_strrchr.c \
		./ext_func/ft_strnstr.c \
		./ext_func/ft_split.c \
		./checks/check_file.c \
		./checks/check_params.c \
		./checks/check_scene.c \
		./checks/check_scene2.c \
		./freeing/to_free.c \
		./gnl/get_next_line.c \
		./gnl/get_next_line_utils.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	# $(CC) -Imlx -c $< -o $@
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	# make -C mlx
	# $(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY : all clean bonus fclean re
