/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:54:45 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/14 14:55:05 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		recursive(int n)
{
	char c;

	if ((n / 10) > 0)
		recursive(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void			ft_putnbr(int n)
{
	char sign;
	char c;

	sign = '-';
	if (n < 0)
	{
		write(1, &sign, 1);
		if (n == -2147483648)
		{
			c = '2';
			write(1, &c, 1);
			n = 147483648;
		}
		else
			n = n * (-1);
	}
	if (n <= 9)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
		recursive(n);
}
