#include "so_long.h"

void	init_struct_game(t_soLong *game, int fd)
{
	game->scene = get_stage(fd);
	game->p = 0;
	game->w = 0;
	game->v = 0;
	game->e = 0;
	game->c = 0;
}

void	init_struct_frame(t_frame *frame)
{
	frame->mlx = 0;
	frame->win = 0;
	frame->win_w = 0;
	frame->win_h = 0;
}

void    verif_scene(t_soLong *game)
{
    count_initials(game);
    return ;
}

int	main(int argc, char *argv[])
{
	int 		fd;
	t_soLong 	game;
	//t_frame 	frame;

	fd = check_create(argc, argv);
	if (fd == 0)
		return (0);
	init_struct_game(&game, fd);
	verif_scene(&game);
	init_struct_frame(game.frame);
	get_background(game.frame, &game);
	get_width_height(game.frame, &game);
	freeing(game.scene);
	//FREE FRAME AND IMAGE !!!!!!;
}
