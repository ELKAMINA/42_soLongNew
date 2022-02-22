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
    char    P;
    char    W;
    char    V;
    char    E;
    char    C;


}   t_soLong;

// Check params and get map
int        check_create(int argc, char *argv[]);
int        check_name_arg(char *argv[]);
int         check_file(char *argv);
char	    **get_stage(int fd);


// External functions
int	        ft_strrchr(const char *s, int c);
int	        ft_strnstr(const char *haystack, const char *needle, size_t len);
char	    **ft_split(char const *s, char c);









#endif