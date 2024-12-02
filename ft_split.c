#include "libft.h"

int	ft_count_subs(char const *s, char c)
{
	int	count;
	int	in_sub;

	count = 0;
	in_sub = 0;
	while (*s)
	{
		if (*s == c)
			in_sub = 0;
		else
		{
			if (in_sub == 0)
			{
				count++;
				in_sub = 1;
			}
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		diff;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count_subs(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (ft_strchr(s, c) != NULL)
				diff = ft_strchr(s, c) - s;
			else
				diff = ft_strlen(s);
			arr[i++] = ft_substr(s, 0, diff);
			if (diff == (int)ft_strlen(s))
				break;
			s += diff;	
		}
		s++;
	}
	arr[i] = NULL;
	return (arr);
}

/*
int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("tripouille", 0);
	i = 0;
	while (res[i])
	{
		printf("Part %d:%s\n", i + 1, res[i]);
		i++;
	}
	return (0);
}
*/
