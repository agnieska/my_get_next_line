/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:55:01 by aslusarc          #+#    #+#             */
/*   Updated: 2018/01/02 17:08:11 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *string, unsigned int first, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (string == NULL)
		return (NULL);
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (i < len)
	{
		*(substring + i) = *(string + first + i);
		i++;
	}
	*(substring + i) = '\0';
	return (substring);
}
