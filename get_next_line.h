/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 00:22:15 by vdarmaya          #+#    #+#             */
/*   Updated: 2016/11/20 00:27:15 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/include/libft.h"

# define BUFF_SIZE 16

typedef struct			s_nextline
{
	char				buffer[BUFF_SIZE + 1];
	int					fd;
	int					nbr;
	struct s_nextline	*next;
}						t_nextline;

int						get_next_line(const int fd, char **line);

#endif
