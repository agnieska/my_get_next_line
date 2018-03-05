/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 23:21:10 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 00:08:11 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*function)(unsigned int, char *))
{
	unsigned int index;

	if (str && function)
	{
		index = 0;
		while (*(str + index))
		{
			function(index, str + index);
			index++;
		}
	}
}
