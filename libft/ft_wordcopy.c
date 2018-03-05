/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 23:04:06 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/10 23:04:12 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wordcopy(const char *src, size_t start, size_t len)
{
	size_t	i;
	size_t	last;
	char	*word;

	i = 0;
	last = start + len;
	word = (char *)malloc((len) * sizeof(char));
	while ((i < len) && (start < last))
	{
		*(word + i) = *(src + start);
		i++;
		start++;
	}
	*(word + i) = '\0';
	return (word);
}
