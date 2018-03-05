/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:00:55 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 21:56:01 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_min(size_t a, size_t b)
{
	if (a < b)
		return ((int)a);
	else
		return ((int)b);
}

size_t		ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dest_size;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	dest_size = i;
	while (*(src + j))
		j++;
	src_size = j;
	j = 0;
	while (i + 1 < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (src_size + f_min(dest_size, n));
}
