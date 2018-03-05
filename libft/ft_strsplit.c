/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 23:58:02 by aslusarc          #+#    #+#             */
/*   Updated: 2017/12/15 04:20:24 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_add_word(const char *str, int i, char **tab, char c)
{
	int		len;
	int		space;

	space = 0;
	len = 0;
	while (*str == c)
	{
		str++;
		space++;
	}
	while (*(str + len) && *(str + len) != c)
		len++;
	if (len > 0)
	{
		*(tab + i) = ft_strnew(len);
		ft_strncpy(*(tab + i), str, len);
	}
	return (space + len);
}

static int		ft_count(const char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*(str + i) == c)
		i++;
	while (*(str + i))
	{
		while (*(str + i) != '\0' && *(str + i) != c)
			i++;
		while (*(str + i) == c)
			i++;
		count++;
	}
	return (count);
}

char			**ft_strsplit(const char *str, char c)
{
	int		len;
	char	**tab;
	int		i;
	int		wordcount;

	if (!str)
		return (NULL);
	wordcount = ft_count(str, c);
	len = 0;
	tab = (char **)ft_memalloc((wordcount + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	len = 0;
	while (*str)
	{
		len = ft_add_word(str, i++, tab, c);
		str = str + len;
	}
	tab[wordcount] = 0;
	return (tab);
}
