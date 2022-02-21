#include "../ext_func/so_long.h"

int	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	j = 0;
	hays = (char *)haystack;
	if (needle[0] == '\0' || needle == NULL)
		return (hays);
	while (hays[i] != '\0' && i < len)
	{
		j = 0;
		while (hays[i] == needle[j] && hays != '\0'
			&& needle[j] != '\0' && i < len)
		{
			i ++;
			j ++;
		}
		if (needle[j] == '\0' && i - j < len)
			return (1);
		i -= j;
		i++;
	}
	return (0);
}
