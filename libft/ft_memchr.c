/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 17:11:37 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *bytes, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*ptr;

	ch = (unsigned char)c;
	ptr = (unsigned char *)bytes;
	while (len > 0)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
		len--;
	}
	return (NULL);
}
