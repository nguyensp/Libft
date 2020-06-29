/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 14:57:44 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/28 22:43:42 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *iter;

	if (!(*lst))
		*lst = new;
	else
	{
		iter = *lst;
		while (iter->next)
			iter = iter->next;
		iter->next = new;
	}
}
