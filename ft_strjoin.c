/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:17:54 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 00:06:24 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	char	*start;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char)
	* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	start = fresh;
	while (*s1)
	{
		*fresh = *s1;
		fresh++;
		s1++;
	}
	while (*s2)
	{
		*fresh = *s2;
		fresh++;
		s2++;
	}
	*fresh = '\0';
	return (start);
}
