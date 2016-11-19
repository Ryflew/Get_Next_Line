/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:15:44 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/19 01:48:00 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char	*str;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &str))
		ft_putendl(str);
	close(fd);
	return (0);
}
