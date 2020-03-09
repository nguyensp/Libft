/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:44:29 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/07 18:46:07 by panguyen         ###   ########.fr       */
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
