/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:11:44 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/14 18:54:18 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*buff;
	int		i;
	long	nb;

	i = ft_num(n);
	nb = n;
	buff = (char *)malloc(sizeof(char) * (i + 1));
	if (!buff)
		return (NULL);
	if (nb < 0)
	{
		buff[0] = '-';
		nb *= -1;
	}
	buff[i] = '\0';
	if (nb == 0)
		buff[0] = '0';
	while (nb)
	{
		buff[i - 1] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (buff);
}
