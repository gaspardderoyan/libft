#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "tripouille";
	char	*ptr;
	ptr = ft_strchr(str, 't' + 256);
	if (ptr)
		printf("The char found was %p", (void *)ptr);
	else
		printf("Returned NULL");
	return (0);
}
*/
