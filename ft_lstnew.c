/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:04:57 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 03:08:48 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*fresh;

	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		fresh->content = NULL;
	else
		fresh->content = content;
	fresh->next = NULL;
	return (fresh);
}
