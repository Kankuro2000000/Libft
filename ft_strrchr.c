/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:50:35 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 16:52:52 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*chr;
	unsigned char	*buff;
	unsigned char	c1;

	chr = (unsigned char *)s;
	buff = NULL;
	c1 = (unsigned char)c;
	while (*chr != '\0')
	{
		if (*chr == c1)
			buff = chr;
		chr++;
	}
	if (*chr == '\0' && c1 == '\0')
		return ((char *)chr);
	return ((char *)buff);
}
