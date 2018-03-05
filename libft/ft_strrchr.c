/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:45:43 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/16 23:18:36 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char)c)
			last = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	if (last)
		return (last);
	return (NULL);
}
