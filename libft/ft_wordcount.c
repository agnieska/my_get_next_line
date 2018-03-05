/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 21:14:32 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/10 21:14:33 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *str, char c)
{
	size_t	wordcount;
	size_t	index;

	index = 0;
	wordcount = 0;
	while (*(str + index))
	{
		while (*(str + index) == c)
			index++;
		while (*(str + index) != c)
			index++;
		wordcount++;
	}
	return (wordcount);
}
