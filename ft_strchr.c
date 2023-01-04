/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:38:41 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 16:51:02 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*chr;
	unsigned char	c1;

	chr = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (*chr != '\0')
	{
		if (*chr == c1)
			return ((char *)chr);
		chr++;
	}
	if (*chr == '\0' && c == '\0')
		return ((char *)chr);
	return (NULL);
}
