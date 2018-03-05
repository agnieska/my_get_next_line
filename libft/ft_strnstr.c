/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:45:41 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 16:46:13 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j) && (i + j < n))
		{
			j++;
			if (*(to_find + j) == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
