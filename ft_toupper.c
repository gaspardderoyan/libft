int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	char	c;
	c = 'a';
	printf("char: %c", ft_toupper(c));
	return (0);
}
*/
