#include "../../checks/so_long.h"

void check_nb_args(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "Error in args \n", 15);
        return ;
    }
    else
        check_name_arg(argv);
}

void check_name_arg(char *argv[])
{
    size_t  len;

    len = ft_strlen(*argv[1]);
    if (ft_strnstr(*argv[1], ".ber", len) == 0 || *argv[1][ft_strchr(*argv[1], ".") - 1] == "" || *argv[1][ft_strchr(*argv[1], ".") - 1] == "/")
    {
        write(1, "Error in args \n", 15);
        return ;
    }
    else
        // check_file(*argv[1]);
        write(1, "Err\n", 4);
}