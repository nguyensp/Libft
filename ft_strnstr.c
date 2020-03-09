/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:34:54 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/07 19:57:52 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*start;
	char	*pattern;
	size_t	i;
	size_t	j;

	i = 0;
	while (*haystack && i < n)
	{
		start = (char*)haystack;
		pattern = (char*)needle;
		j = 0;
		while (*haystack && *pattern && *haystack == *pattern && (i + j) < n)
		{
			haystack++;
			pattern++;
			j++;
		}
		if (!*pattern)
		{
			return (start);
		}
		haystack = start + 1;
		i++;
	}
	return (0);
}
