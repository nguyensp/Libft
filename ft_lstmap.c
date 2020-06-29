/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 15:01:56 by panguyen          #+#    #+#             */
/*   Updated: 2020/06/29 06:23:50 by psngyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *iter;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (!(iter = ft_lstnew(f(lst->content))))
		return (NULL);
	head = iter;
	while (lst)
	{
		if (lst->next)
		{
			if (!(iter->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&head, del);
				return (0);
			}
			iter = iter->next;
		}
		lst = lst->next;
	}
	iter->next = NULL;
	return (head);
}
