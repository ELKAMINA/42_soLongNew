#include "../so_long.h"

void my_mlx_put_pixel(t_img_data *img, int x, int y, int color)
{
    char    *dst;

    dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}
void square (t_img_data *img)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y < 64)
    {
        x = 0;
        while (x < 64)
        {
            my_mlx_put_pixel(img, y, x, 0x00FF0000);
            x++;
        }
        y++;
    }
}