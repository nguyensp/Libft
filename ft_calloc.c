/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 14:35:21 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 11:35:51 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *fresh;

	if (!(fresh = (char*)malloc(size * count)))
		return (NULL);
	ft_memset(fresh, 0, count * size);
	return (fresh);
}
