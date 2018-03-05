/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 00:00:45 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 00:15:40 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *str1, char const *str2, size_t n)
{
	size_t i;

	if (!str1 || !str2)
		return (0);
	i = 0;
	while ((*(str1 + i) || *(str2 + i)) && i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (0);
		i++;
	}
	return (1);
}
