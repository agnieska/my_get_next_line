/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 16:02:12 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/16 20:13:15 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	void **ap;

	if (as == NULL || *as == NULL)
		return ;
	else
	{
		ap = (void **)as;
		free(*ap);
		*ap = NULL;
	}
}