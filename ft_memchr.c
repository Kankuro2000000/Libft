/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:25:52 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 16:48:45 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;
	unsigned char	c1;

	i = 0;
	buff = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (buff[i] == c1)
			return ((void *)(buff + i));
		i++;
	}
	return (NULL);
}
