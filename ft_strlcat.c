/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:13:48 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 13:34:03 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	size;

	i = 0;
	k = 0;
	size = ft_strlen(dst);
	if (dstsize <= size)
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (dstsize - 1 > i && src[k] != '\0')
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (size + ft_strlen(src));
}
