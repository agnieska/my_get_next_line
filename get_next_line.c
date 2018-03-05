/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aslusarc <aslusarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:24:06 by aslusarc          #+#    #+#             */
/*   Updated: 2018/03/05 11:46:25 by aslusarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "get_next_line.h"
#include <unistd.h>

static	size_t	find_endline(char *buff)
{
	size_t lengh;

	lengh = 0;
	while (buff[lengh] != '\0' && buff[lengh] != '\n')
		lengh++;
	if (buff[lengh] == '\n')
	{
		buff[lengh] = '\0';
		return (lengh);
	}
	else
		return (-1);
}

static	char	*join(char *ptr, char *buff)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (ptr)
		i = ft_strlen(ptr);
	if (buff)
		j = ft_strlen(buff);
	join = (char *)malloc(sizeof(*join) * (i + j + 1));
	ft_memcpy(join, ptr, i);
	ft_memcpy(join + i, buff, j);
	join[i + j] = '\0';
	free(ptr);
	ft_bzero(buff, BUFF_SIZE + 1);
	return (join);
}

static	int		ft_readline(char **ptr, char **buff, char **line)
{
	char	*temp;
	int		end;

	*ptr = join(*ptr, *buff);
	end = find_endline(*ptr);
	if (end > -1)
	{
		*line = ft_strdup(*ptr);
		temp = *ptr;
		*ptr = ft_strdup(*ptr + end + 1);
		free(temp);
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*hashtable[1000];
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
