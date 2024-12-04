/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderoyqn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:14:10 by gderoyqn          #+#    #+#             */
/*   Updated: 2024/12/04 13:14:14 by gderoyqn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new;
	int		i;

	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
	{
		printf("Returning NULL\n");
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main(void)
{
	const char	str1[] = "This is a test!";
	char		*str2;	
	
	str2 = ft_strdup(str1);
	printf("str2 --> %s\n", str2);
	free(str2);
	return (0);
}
*/
