/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:54:45 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 02:04:52 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_long(long nombre)
{
	int	size;

	size = 1;
	if (nombre < 0)
	{
		nombre = nombre * (-1);
		size++;
	}
	while ((nombre = nombre / 10) > 0)
		size++;
	return (size);
}

char		*ft_itoa(int nombre)
{
	char	*fresh;
	int		size;
	long	copy;

	copy = nombre;
	size = ft_size_long(copy);
	if (nombre < 0)
		copy = -copy;
	fresh = malloc((size + 1) * sizeof(char));
	if (!fresh)
		return (NULL);
	*(fresh + size--) = '\0';
	*(fresh + size--) = copy % 10 + 48;
	while ((copy = copy / 10) > 0)
		*(fresh + size--) = copy % 10 + 48;
	if (nombre < 0)
		*fresh = '-';
	return (fresh);
}
