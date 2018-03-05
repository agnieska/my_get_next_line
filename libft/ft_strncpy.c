/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:39:42 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 22:59:31 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = dest;
	i = -1;
	while (++i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			while (i < n)
				dest[i++] = '\0';
		}
	}
	return (ptr);
}
