/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:15:44 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/15 22:05:28 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char	**str;
	int		fd;

	str = (char**)malloc(sizeof(char*) * 2);
	str[1] = (void*)0;
	fd = open(argv[1], O_RDONLY);
	printf("return value = %d\n", get_next_line(fd, str));
	printf("str[0] = %s\n", str[0]);
	return (0);
}
