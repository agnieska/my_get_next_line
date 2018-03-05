/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:56:32 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 04:35:27 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(const char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static int	first_char(const char *str)
{
	size_t	i;
	int		first;

	i = 0;
	first = 0;
	if (!str)
		return (0);
	while (*(str + i))
	{
		if (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n')
		{
			first++;
			i++;
		}
		else
			break ;
	}
	return (first);
}

static int	last_char(const char *str)
{
	int i;
	int last;

	if ((last = ft_size(str)) == 0)
		return (last);
	i = last - 1;
	while (i > 0)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i--;
		else
			return (i);
	}
	return (last);
}

char		*ft_strtrim(char const *str)
{
	int		i;
	int		size;
	int		j;
	char	*ptr;

	if (!(str))
		return (NULL);
	size = last_char(str) - first_char(str) + 1;
	if (!(ptr = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	i = first_char(str);
	j = 0;
	while (*(str + i) && i <= last_char(str))
	{
		*(ptr + j) = *(str + i);
		j++;
		i++;
	}
	*(ptr + j) = '\0';
	return (ptr);
}
