/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:11:22 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/16 01:01:47 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc(char *str, int size)
{
	char 	*tmp;
	int 	i;

	tmp = str;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
	{
		free(str);
		return ((void*)0);
	}
	i = -1;
	while (++i < size)
		str[i] = tmp[i];
	free(tmp);
	return (str);
}

int		get_end(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static char	buffer[BUFF_SIZE];
	char		*tmp;
	int			bytes;
	int			count;

	if (!(*line = malloc(1)))
		return (0);
	count = 0;
	while (1)
	{
		bytes = read(fd, buffer, BUFF_SIZE);
		if (ft_strchr(buffer, '\n') || (bytes < BUFF_SIZE))
		{
			if (!(tmp = ft_strsub(buffer, 0, get_end(buffer))))
				return (-1);
			*line = ft_strjoin(*line, tmp);
			free(tmp);
			if (ft_strchr(buffer, '\n'))
				return (1);
			return (0);
		}
		if (!(ft_realloc(*line, (BUFF_SIZE * ++count))))
			return (-1);
		*line = ft_strjoin(*line, buffer);
	}
	return (-1);
}
