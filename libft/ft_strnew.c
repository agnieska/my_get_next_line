/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:09:03 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 17:25:46 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		*(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
