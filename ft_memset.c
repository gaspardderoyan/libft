#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return s;
}

/*
#include <stdio.h>
int	main(void)
{
	void *ptr;
	size_t n = 4;
	ptr = malloc(sizeof(char) * n);
	if (!ptr)
		return (0);
	ft_memset(ptr, 90, n);
	printf("%s\n", (char *)ptr); 
	return (0);	
	
}
*/
