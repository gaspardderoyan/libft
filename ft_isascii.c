/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderoyqn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:20:40 by gderoyqn          #+#    #+#             */
/*   Updated: 2024/11/26 17:25:22 by gderoyqn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("should be 1 --> %d\n", ft_isascii(5));
	printf("should be 0 --> %d\n", ft_isascii(568));
	printf("should be 0 --> %d\n", ft_isascii(-6));
	return (0);
}
*/
