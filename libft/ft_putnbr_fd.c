/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:54:45 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 00:33:33 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

static void		recursive(int n, int fd)
{
	char c;

	if ((n / 10) > 0)
		recursive(n / 10, fd);
	c = (n % 10) + 48;
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	char sign;
	char c;

	sign = '-';
	if (n < 0)
	{
		write(fd, &sign, 1);
		if (n == -2147483648)
		{
			c = '2';
			write(fd, &c, 1);
			n = 147483648;
		}
		else
			n = n * (-1);
	}
	if (n <= 9)
	{
		c = n + 48;
		write(fd, &c, 1);
	}
	else
		recursive(n, fd);
}
