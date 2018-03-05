/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:58:48 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/16 21:14:57 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *str)
{
	char c;

	if (!str)
		return ;
	c = '\n';
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &c, sizeof(char));
}
