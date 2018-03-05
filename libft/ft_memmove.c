/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/11/29 18:02:08 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	bytes;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (src < dest)
	{
		while (len-- > 0)
			*(ptr_dest + len) = *(ptr_src + len);
	}
	else
	{
		bytes = 0;
		while (bytes < len)
		{
			*(ptr_dest + bytes) = *(ptr_src + bytes);
			bytes++;
		}
	}
	return (dest);
}
