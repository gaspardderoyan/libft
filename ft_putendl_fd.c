#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	ft_putstr_fd("This is a test!", 1);
	return (0);
}
*/
