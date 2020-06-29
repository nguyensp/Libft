/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:28:00 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 00:14:50 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**word_array;
	size_t	w_count;
	size_t	w_len;
	size_t	i;
	size_t	j;

	w_count = word_count(s, c);
	if (!(word_array = (char**)malloc(sizeof(char*) * (w_count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < w_count)
	{
		w_len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			w_len++;
		}
		word_array[j++] = ft_substr(s, i - w_len, w_len);
	}
	word_array[j] = NULL;
	return (word_array);
}
