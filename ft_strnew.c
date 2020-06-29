/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 03:21:56 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 03:22:01 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
