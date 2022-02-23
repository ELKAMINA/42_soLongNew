#include "mlx/mlx.h"
#include "so_long.h"
#include "minilibx_opengl_20191021/mlx.h"

void	init_struct(t_soLong *game, int fd)
{
	game->scene = get_stage(fd);
	game->p = 0;
	game->w = 0;
	game->v = 0;
	game->e = 0;
	game->c = 0;
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

	fd = check_create(argc, argv);
	//malloc la struct; 
	if (fd == 0)
		return (0);
	init_struct(&game, fd);
	verif_scene(&game);
	freeing(game.scene);
}
