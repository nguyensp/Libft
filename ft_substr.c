/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:08:15 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:09:03 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	if (!s || !(fresh = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
