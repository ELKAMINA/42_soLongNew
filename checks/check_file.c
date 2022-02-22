#include "../so_long.h"

void check_file(char *argv)
{
    int fd;
    int v_ret;
    char *buf;
    int   i;

    fd = open(&argv[1], O_RDWR);
    if (fd == -1)
    {
        write(1, "Error - Directory not File\n", 28);
        return ;
    }
    v_ret = 1;
    buf = malloc((sizeof(char) * 1) + 1);
    i = 0;
    while(v_ret != 0)
    {
        v_ret = read(fd, buf, 1);

    }
}
