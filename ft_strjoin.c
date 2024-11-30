#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*s;
	char	*res;
	
	total_len = 0;
	if (s1)
		total_len += ft_strlen(s1);
	if (s2)
		total_len += ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!s)
		return (NULL);
	res = s;
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	return (res);
}

/*
int	main(void)
{
	char *s;
	
	s = ft_strjoin("Hello ", "Kitty!");
	printf("Res --> %s\n", s);
	return (0);
}
*/
