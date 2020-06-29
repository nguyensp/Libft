/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 17:17:37 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:32:56 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s > d)
	{
		ft_memcpy(dst, src, len);
	}
	else if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
