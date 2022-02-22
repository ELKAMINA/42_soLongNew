#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./gnl/get_next_line.h"

// Check params and get map
void        check_nb_args(int argc, char *argv[]);
void        check_name_arg(char *argv[]);
void        check_file(char *argv);
char	    **get_stage(int fd);


// External functions
int	        ft_strrchr(const char *s, int c);
int	        ft_strnstr(const char *haystack, const char *needle, size_t len);
char	    **ft_split(char const *s, char c);









#endif