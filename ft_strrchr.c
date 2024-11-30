#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	char *last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (last);
}
