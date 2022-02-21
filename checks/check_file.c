#include "../checks/so_long.h"

void check_file(char *argv[])
{
    int fd;
    int v_ret;
    char *buf;
    int   i;

    fd = open(*argv[1], O_RDONLY);
    v_ret = 1;
    i = 0;
    while(v_ret != 0)
    {
        v_ret = read(fd, buf, 1);

    }
}