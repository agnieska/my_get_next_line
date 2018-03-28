/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <aslusarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:24:06 by aslusarc          #+#    #+#             */
/*   Updated: 2018/03/28 23:30:46 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "get_next_line.h"
#include <unistd.h>

static	size_t	find_endline(char *buff)
{
	size_t index;

	index = 0;
	while (buff[index] != '\0' && buff[index] != '\n')
		index++;
	if (buff[index] == '\n')
	{
		buff[index] = '\0';
		return (index);
	}
	else
		return (-1);
}

static	char	*join(char *remaining, char *buff)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (remaining)
		i = ft_strlen(remaining);
	if (buff)
		j = ft_strlen(buff);
	join = (char *)malloc(sizeof(*join) * (i + j + 1));
	ft_memcpy(join, remaining, i);
	ft_memcpy(join + i, buff, j);
	join[i + j] = '\0';
	free(remaining);
	ft_bzero(buff, BUFF_SIZE + 1);
	return (join);
}

static	int		ft_readline(char **remaining, char **buff, char **line)
{
	char	*temp;
	int		end;

	*remaining = join(*remaining, *buff);
	end = find_endline(*remaining);
	if (end > -1)
	{
		*line = ft_strdup(*remaining);
		temp = *remaining;
		*remaining = ft_strdup(*remaining + end + 1);
		free(temp);
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*hashtable[2048];
	char		*buffer;
	int			readline;
	int			result;

	buffer = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || !buffer || (result = read(fd, buffer, 0)) < 0)
		return (-1);
	while ((result = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		readline = ft_readline(&hashtable[fd], &buffer, line);
		free(buffer);
		if (readline)
			return (1);
		buffer = ft_strnew(BUFF_SIZE);
	}
	if ((readline = ft_readline(&hashtable[fd], &buffer, line)))
		return (1);
	else if (ft_strlen(hashtable[fd]) > 0)
	{
		*line = ft_strdup(hashtable[fd]);
		ft_strdel(&hashtable[fd]);
		return (1);
	}
	return (readline);
}
