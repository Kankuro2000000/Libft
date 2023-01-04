/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:39:49 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/14 18:10:40 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		if (*s)
			s++;
	}
	return (count);
}

static char	*malloc_word(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}	
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free((void *)(arr[i]));
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (*s)
	{
		if (*s && *s != c)
		{
			arr[i] = malloc_word(s, c);
			if (arr[i] == NULL)
				return (ft_free(arr, i));
			i++;
			while (*s && *s != c)
				s++;
		}
		if (*s)
			s++;
	}
	arr[i] = NULL;
	return (arr);
}
