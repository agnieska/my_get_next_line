/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 23:58:26 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 20:41:17 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		i = 0;
		while (*(str + i) == *(to_find + i))
		{
			i++;
			if (*(to_find + i) == '\0')
				return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
