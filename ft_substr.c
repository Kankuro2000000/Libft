/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:06:13 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 13:47:11 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	i;
	size_t	lt;

	if (!s)
		return (NULL);
	i = 0;
	lt = ft_strlen(s) - start;
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (lt > len)
		lt = len;
	buff = (char *)malloc(sizeof(char) * (lt + 1));
	if (!buff)
		return (NULL);
	while (len > i && s[start] != '\0')
	{
		buff[i] = s[start];
		i++;
		start++;
	}
	buff[i] = '\0';
	return (buff);
}
