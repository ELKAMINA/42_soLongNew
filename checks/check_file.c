#include "../so_long.h"

int	check_file(char *argv)
{
	int				fd;
	
	fd = open(argv, O_RDWR);
	if (fd == -1)
	{
		write(1, "Error - Directory not File\n", 28);
		return (0);
	}
	else
		return (fd);
}

char	**get_stage(int fd)
{
	char			*buf;
	char			**map;
	static	char	*final;

	buf = get_next_line(fd);
	while (buf)
	{
		final = ft_strjoin(final, buf);
		free(buf);
		buf = get_next_line(fd);
	}
	map = ft_split(final, '\n');
	return (map);
}

void	init_struct(t_soLong *game, int fd)
{
	game->scene = get_stage(fd);
	game->p = 0;
	game->w = 0;
	game->v = 0;
	game->e = 0;
	game->c = 0;
}
