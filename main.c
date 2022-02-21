#include "mlx/mlx.h"
#include "so_long.h"
#include "minilibx_opengl_20191021/mlx.h"
#include <stdio.h>

// int my_key_func(int keycode, void *param)
// {
//     printf("key event %d\n", keycode);
//     mlx_pixel_put(mlx, win, 300, 300, 0xFF00FF);
//     return (0);
// }

int main(int argc, char *argv[])
{
    check_nb_args(argc, argv);
    // void *mlx;
    // void *win;
    // int x;
    // int y;
    // // Programme qui permet de creer la connexion
    // mlx = mlx_init();
    // win = mlx_new_window(mlx, 700, 700, "mlx 42");
    // // afficher des pixels et faire differents dessins. La fonction mlx_pixel_put prend plusieurs parametres dont mlx, win for window, int x, int y and the color with RGB
    // // afficher un pixel a linterieur dune fenetre (en RGB)
    // y = 50;
    // while (y < 150)
    // {
    //     x = 50;
    //     while(x < 150)
    //     {
    //         mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
    //         x++;
    //     }
    //     y++;
    // }
    // // Gere les evenements. Qd utilisateur clique sr clvier => appel de fonctions
    // //mlx_key_hook(win, my_key_func, 0);
    // // mlx.loop permet de gerer les evenements et donne la main a lensemble du systeme graphique pr afficher la fenetre
    // // gere les evenements de click et va appeler les bonnes fonctions
    // mlx_loop(mlx);

}