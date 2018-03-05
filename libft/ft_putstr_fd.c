/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:08:19 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/16 20:35:40 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	if (!str || !*str)
		return ;
	while (*str)
	{
		write(fd, str, sizeof(char));
		str++;
	}
}
