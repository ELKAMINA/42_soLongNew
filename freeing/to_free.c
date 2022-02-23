#include "../so_long.h"

void    freeing(char    **game)
{
    int i;

    i = 0;
    while(game[i])
    {
        free(game[i]);
        game[i] = NULL;
        i++;
    }
    free(game);
    game = NULL;
}