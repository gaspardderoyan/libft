/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderoyqn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:56:35 by gderoyqn          #+#    #+#             */
/*   Updated: 2024/12/04 12:56:38 by gderoyqn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_to_index(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = i + '0';
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;	

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "A test!";
	printf("Before: %s\n", str);
	ft_striteri(str, &ft_to_index);
	printf("After: %s\n", str);
	return (0);
}
*/
