int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	char	c;
	c = 'A';
	printf("char: %c", ft_tolower(c));
	return (0);
}
*/
