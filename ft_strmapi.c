#include "libft.h"

char	ft_to_index(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (i + '0');
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	*res;

	res = ft_strmapi("A test!", &ft_to_index);
	printf("res: %s\n", res);
	return (0);
}
*/
