#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./gnl/get_next_line.h"

//Main struct

typedef struct s_soLong
{
    char    **scene;
    int    p;
    int    w;
    int    v;
    int    e;
    int    c;
}   t_soLong;

// Check params and get map
int        check_create(int argc, char *argv[]);
int        check_name_arg(char *argv[]);
int        check_file(char *argv);
char	   **get_stage(int fd);
void	    init_struct(t_soLong *game, int fd);

// Check map validity
void    verif_scene(t_soLong *game);
void    count_initials(t_soLong *game);
void    increment(t_soLong *game, char c);
void    check_validity(t_soLong *game);
void    check_walls(t_soLong *game);
int     check_square(t_soLong *game);
void    check_fence(t_soLong *game);
void    check_first_last_line(t_soLong *game, char *lineOne);
void    check_intermediate_lines(t_soLong *game, char *lineOne);

// Free when parsing 
void    freeing(char    **game);

// External functions
int	        ft_strrchr(const char *s, int c);
int	        ft_strnstr(const char *haystack, const char *needle, size_t len);
char	    **ft_split(char const *s, char c);









#endif