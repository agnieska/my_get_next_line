/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/11/29 18:09:49 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dest,
					const void *restrict src, int c, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	ch;
	size_t			bytes;

	bytes = 0;
	ch = (unsigned char)c;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (bytes < n)
	{
		*ptr_dest = *ptr_src;
		if (*ptr_src == ch)
			return (ptr_dest + 1);
		ptr_dest++;
		ptr_src++;
		bytes++;
	}
	return (NULL);
}
