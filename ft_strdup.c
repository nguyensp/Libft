/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 11:15:36 by panguyen          #+#    #+#             */
/*   Updated: 2020/03/06 23:52:34 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*dup;

	if (!(dup = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
