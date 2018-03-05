/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:55:50 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 06:26:53 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*f_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i))
		i++;
	j = 0;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

static char		*f_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

static int		f_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char			*ft_strjoin(char const *str1, char const *str2)
{
	char *string;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	string = (char *)malloc((f_strlen(str1) + f_strlen(str2) + 1) *
							sizeof(char));
	if (string == NULL)
		return (NULL);
	f_strcpy(string, str1);
	f_strcat(string, str2);
	return (string);
}
