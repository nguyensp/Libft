/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:34:11 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/04 15:37:49 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	char	*start;

	if (!(fresh = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
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
