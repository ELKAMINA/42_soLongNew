#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

// Check params
void check_nb_args(int argc, char *argv[]);
int	ft_strnstr(const char *haystack, const char *needle, size_t len);




#endif