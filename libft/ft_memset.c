/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/11/29 18:02:08 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *bytes, int c, size_t len)
{
	unsigned char ch;
	unsigned char *ptr;

	ch = (unsigned char)c;
	ptr = (unsigned char *)bytes;
	while (len > 0)
	{
		len--;
		*(ptr + len) = ch;
	}
	return (bytes);
}
