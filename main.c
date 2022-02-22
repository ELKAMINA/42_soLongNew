#include "mlx/mlx.h"
#include "so_long.h"
#include "minilibx_opengl_20191021/mlx.h"

int	main(int argc, char *argv[])
{
	int 	fd;
	t_soLong game;

	fd = check_create(argc, argv);
	//malloc la struct; 
	if (fd == 0)
		return (0);
	else
		game.scene = get_stage(fd);
	verif_scene(game);
	
	
}
