/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderoyqn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:08:23 by gderoyqn          #+#    #+#             */
/*   Updated: 2024/12/04 15:09:51 by gderoyqn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (1)
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (last);
}
