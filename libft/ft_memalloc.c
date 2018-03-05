/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 21:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 17:11:03 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(n * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < n + 1)
	{
		*(ptr + i) = '\0';
		i++;
	}
	return ((void *)ptr);
}
