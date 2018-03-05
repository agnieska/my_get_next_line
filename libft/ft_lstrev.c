/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 05:39:11 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/31 05:39:13 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstrev(t_list **alst)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	previous = NULL;
	current = *alst;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*alst = previous;
}
