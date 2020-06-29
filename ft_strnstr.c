/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 16:46:07 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:15:08 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t n)
{
	char	*start;
	char	*pattern;
	size_t	i;
	size_t	j;

	i = 0;
	if (ndl[0] == '\0')
		return ((char*)hay);
	while (*hay && i < n)
	{
		start = (char*)hay;
		pattern = (char*)ndl;
		j = 0;
		while (*hay && *pattern && *hay == *pattern && (i + j) < n)
		{
			hay++;
			pattern++;
			j++;
		}
		if (!*pattern)
			return (start);
		hay = start + 1;
		i++;
	}
	return (0);
}
