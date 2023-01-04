/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:58:06 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/19 12:39:24 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*buff;
	size_t	i;
	size_t	k;

	if (*needle == '\0')
		return ((char *)haystack);
	buff = (char *)haystack;
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i] == needle[k] && needle[k] != '\0' && i < len)
		{
			i++;
			k++;
		}
		if (needle[k] == '\0')
			return (&buff[i - k]);
		if (k != 0)
			i -= k;
		i++;
	}
	return (NULL);
}
