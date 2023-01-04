/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:56:46 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 17:03:53 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*buff;
	size_t		i;
	size_t		len;
	size_t		b;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_cmp(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > i && ft_cmp(set, s1[len - 1]))
		len--;
	buff = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!buff)
		return (NULL);
	b = 0;
	while (len > i)
		buff[b++] = s1[i++];
	buff[b] = '\0';
	return (buff);
}
