/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 22:34:19 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			bytes;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	bytes = -1;
	while (++bytes < n)
	{
		if (*(ptr_dest + bytes) != *(ptr_src + bytes))
			return (*(ptr_dest + bytes) - *(ptr_src + bytes));
	}
	return (0);
}
