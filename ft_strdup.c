/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:06:44 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:24:12 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char *dup;

	if (!(dup = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
