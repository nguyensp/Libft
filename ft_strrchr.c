/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 16:44:07 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:12:39 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char*)&s[i]);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
