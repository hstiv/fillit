/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filrd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:10:56 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/23 18:04:20 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		filrd(char *file_name)
{
	int		fd;
	int		i;
	int		y;
	char	**s;
	char	buf[BUFF_SIZE + 1];

	if (!(fd = open(file_name, O_RDONLY)))
		return (0);
	if ((y = read(fd, buf, BUFF_SIZE)) < 0)
		return (0);
	buf[y] = '\0';
	i = file_valid(buf);
	if (i != 1)
		return (i);
	s = ft_strsplit_wtsp(buf, '\n');
	i = figure_valid(s);
	if (i != 1)
		return (i);
	ft_putstr("valid!\n");
	return (1);
}
