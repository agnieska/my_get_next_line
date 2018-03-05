/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 22:49:33 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/10 22:49:44 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size_integer(int nombre)
{
	size_t size;

	size = 1;
	if (nombre < 0)
	{
		nombre = nombre * (-1);
		size++;
	}
	while (nombre > 0)
	{
		nombre = nombre / 10;
		size++;
	}
	return (size);
}
