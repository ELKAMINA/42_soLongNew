#include "../so_long.h"

int	check_create(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error in args \n", 15);
		return (0);
	}
	else
		return (check_name_arg(argv));
	}

	int	check_name_arg(char *argv[])
	{
	size_t	len;

	len = ft_strlen(argv[1]);
	if (ft_strnstr(argv[1], ".ber", len) == 0 ||
		argv[1][ft_strrchr(argv[1], '.') - 1] == '\0' ||
			argv[1][ft_strrchr(argv[1], '.') - 1] == '/')
	{
		write(1, "Error in args \n", 15);
		return (0);
	}
	else
		return (check_file(argv[1]));
}
