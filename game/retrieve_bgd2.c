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
    //printf("Test1");
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

void    get_colored_square(t_frame *frame, t_soLong *game)
{
    t_img_data img;
    int i;
    int j;

    i = 0;
    // printf("Test");
    while (game->scene[i])
    {
        j = 0;
        while (game->scene[i][j])
        {
            init_struct_imgData(&img);
            img.img = mlx_new_image(frame->mlx, 64, 64);
            img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
            //my_mlx_put_pixel(&img, 5, 5, 0x00FF0000);
            square(&img);
            mlx_put_image_to_window(frame->mlx, frame->win, img.img, (i + img.img_width) , (j + img.img_height));
            mlx_loop(frame->mlx);
            j++;
        }
        i++;
    }
}