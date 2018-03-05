/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 05:38:32 by aslusarc          #+#    #+#             */
/*   Updated: 2018/01/02 17:36:15 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		ft_memdel((void **)&lst);
		lst = tmp;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*tete;

	if (lst == NULL || f == NULL)
		return (NULL);
	elem = ft_lstnew(lst->content, lst->content_size);
	if (elem == NULL)
		return (NULL);
	elem = (*f)(elem);
	tete = elem;
	while (lst->next)
	{
		lst = lst->next;
		elem->next = ft_lstnew(lst->content, lst->content_size);
		if (elem->next == NULL)
		{
			clear(tete);
			return (NULL);
		}
		elem->next = (*f)(elem->next);
		elem = elem->next;
	}
	return (tete);
}
