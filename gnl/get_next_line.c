/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:20:00 by zrdouane          #+#    #+#             */
/*   Updated: 2022/03/29 23:20:46 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../libft/libft.h"

/* Returs -1 if the params are invalid.
If valid, returns 1 and sets <readbuff> to
an empty string if it was null */
int	validparams(int fd, char **line, char **readbuff)
{
	if (*readbuff == NULL)
	{
		*readbuff = malloc(sizeof(char));
		if (!*readbuff)
			return (-1);
		**readbuff = '\0';
	}
	if (fd < 0 || !line
		|| BUFFER_SIZE <= 0 || fd > 4096)
	{
		free (*readbuff);
		*readbuff = NULL;
		return (-1);
	}
	return (1);
}

int	end_of_read(int rdcount, char **readbuff, char **line)
{
	int	len;

	if (rdcount == 0 && ft_strlen(*readbuff) <= 0)
	{
		free(*readbuff);
		*readbuff = NULL;
		*line = malloc(sizeof(char));
		**line = '\0';
	}
	else if (rdcount == 0)
	{
		len = ft_strlen(*readbuff);
		*line = ft_getline(len, *readbuff);
		free(*readbuff);
		*readbuff = NULL;
	}
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static char	*readbuff;
	int			linelen;
	int			readcount;

	if (validparams(fd, line, &readbuff) < 0)
		return (-1);
	linelen = ft_linelen(readbuff);
	while (linelen < 0)
	{
		readcount = ft_newread(fd, &readbuff);
		if (!readbuff || readcount < 0)
			return (-1);
		else if (readcount == 0)
			return (end_of_read(readcount, &readbuff, line));
		linelen = ft_linelen(readbuff);
	}
	*line = ft_getline(linelen, readbuff);
	readbuff = ft_clearline(linelen + 1, readbuff);
	return (1);
}
