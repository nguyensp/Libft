/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 16:39:16 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 05:53:10 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;
	size_t i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen <= dstsize)
	{
		i = 1;
		dst += dstlen;
		while (*src && dstlen + i++ < dstsize)
			*dst++ = *src++;
		*dst = '\0';
		return (dstlen + srclen);
	}
	return (dstsize + srclen);
}
