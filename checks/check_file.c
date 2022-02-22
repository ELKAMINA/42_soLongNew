#include "../so_long.h"

void	check_file(char *argv)
{
	int				fd;
	
	fd = open(argv, O_RDWR);
	if (fd == -1)
	{
		write(1, "Error - Directory not File\n", 28);
		return ;
	}
	else
		get_stage(fd);
}

char	**get_stage(int fd)
{
	char			*buf;
	char			**map;
	static	char	*final;
	int		i;

	i = 0;
	buf = get_next_line(fd);
	while (buf)
	{
		final = ft_strjoin(final, buf);
		free(buf);
		buf = get_next_line(fd);
	}
	map = ft_split(final, '\n');
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	return (map);
}
