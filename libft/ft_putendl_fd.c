/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 00:00:09 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/16 21:15:19 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	char c;

	if (!str)
		return ;
	c = '\n';
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	write(fd, &c, 1);
}
