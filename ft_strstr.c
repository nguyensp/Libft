/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:39:58 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/11 16:12:19 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*start;
	char	*pattern;

	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		start = (char*)haystack;
		pattern = (char*)needle;
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (0);
}
