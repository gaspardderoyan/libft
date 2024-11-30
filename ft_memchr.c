#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;	
	unsigned char	*st = (unsigned char *)s;
	unsigned char	ch = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
