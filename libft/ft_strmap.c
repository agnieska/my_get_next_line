/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 23:21:10 by aslusarc          #+#    #+#             */
/*   Updated: 2018/01/02 17:08:26 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*function)(char))
{
	int		size;
	char	*fresh;

	if (str == NULL || function == NULL)
		return (NULL);
	size = 0;
	while (*(str + size))
		size++;
	if (!(fresh = malloc((size + 1) * sizeof(char))))
		return (NULL);
	*(fresh + size) = '\0';
	size = -1;
	while (*(str + ++size) != '\0')
		*(fresh + size) = function(*(str + size));
	return (fresh);
}
