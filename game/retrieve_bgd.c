#include "../so_long.h"

void    get_background(t_frame *frame, t_soLong *game)
{
    get_mlx_win(frame, game);
    get_image(frame);
}

void    get_mlx_win(t_frame *frame, t_soLong *game)
{
    frame->mlx = mlx_init();
    get_width_height(frame, game);
    frame->win = mlx_new_window(frame->mlx, frame->win_w, frame->win_h, "Hello World");
}

void get_width_height(t_frame *myframe, t_soLong *game)
{
    int wi_g;
    int hei_g;

    hei_g = check_square(game);
    wi_g = ft_strlen(game->scene[0]);
    myframe->win_w = wi_g * 64;
    myframe->win_h = hei_g * 64;
    //printf("height = %d --- width = %d\n", hei_g, wi_g);
}

void    get_image(t_frame *frame)
{
// MALLOC STRUCT ???????
    t_img_data img;

    init_struct_imgData(&img);
    img.img = mlx_new_image(frame->mlx, frame->win_w, frame->win_h);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    my_mlx_put_pixel(&img, 5, 5, 0x00FF0000);
    square(&img);
    mlx_put_image_to_window(frame->mlx, frame->win, img.img, 0, 0);
    mlx_loop(frame->mlx);
}

// MALLOC STRUCT ???????
void init_struct_imgData(t_img_data *img)
{
    img->img = 0;
    img->bits_per_pixel = 0;
	img->line_length = 0;
	img->endian = 0;
    img->rpath = NULL;
	img->img_width = 0;;
	img->img_height = 0;
    img->addr = NULL;
}