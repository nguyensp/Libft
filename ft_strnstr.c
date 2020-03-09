/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:34:54 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/09 15:56:20 by panguyen         ###   ########.fr       */
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
		{
			return (start);
		}
		hay = start + 1;
		i++;
	}
	return (0);
}
