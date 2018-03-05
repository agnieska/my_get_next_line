/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 05:39:02 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/31 05:39:03 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*remove(t_list *lst, void *ptr)
{
	t_list *temp;

	if (!lst)
		return (NULL);
	if (lst->content == ptr)
	{
		temp = lst->next;
		ft_memdel((void **)&lst);
		return (temp);
	}
	lst->next = remove(lst->next, ptr);
	return (lst);
}

void			ft_lstremove(t_list **lst, void *ptr)
{
	*lst = remove(*lst, ptr);
}
