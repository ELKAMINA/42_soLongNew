#include "../so_long.h"

void    verif_scene(char    **scene)
{
    count_init(char **scene);
    return (0);
}

void    count_initials(char **game)
{
  int   i;
  int   j;

  i = 0;
  while (game.scene[i])
  {
      j = 0
      while (game.scene[i][j])
      {
          increment(game, game.scene[i][j]);
          j++
      }
      i++;
  }
    check_validity(game);
    check_walls(game);
}

void increment(t_soLong game, char c)
{
    if (c == "P")
        game.P++;
    if (c == "0")
        game.V++;
    if (c == "1")
        game.W++;
    if (c == "C")
        game.C++;
    if (c == "E")
        game.E++;
}

void check_validity(t_soLong game)
{
    if (game.E < 1 || game.C < 1 || game.P < 1)
    {
        write(1, "Error\n", 7);
        write(1, "At least 1 item, 1 collectible, 1 exit\n", 18); 
        return ;
    }
    
}

void    check_walls(t_soLong game)
{
    check_square(game);
    check_fence(game);
}