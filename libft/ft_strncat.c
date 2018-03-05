/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:00:55 by aslusarc          #+#    #+#             */
/*   Updated: 2017/11/28 21:17:12 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
		*(dest + i++) = *(src + j++);
	*(dest + i) = '\0';
	return (dest);
}
