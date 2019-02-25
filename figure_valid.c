/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:53:59 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/23 17:58:50 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		det_check(char **s, int i, int j)
{
	int			x;

	x = 0;
	if (i < 3 && s[i + 1][j] == '#')
		x++;
	if (i > 0 && s[i - 1][j] == '#')
		x++;
	if (j < 3 && s[i][j + 1] == '#')
		x++;
	if (j > 0 && s[i][j - 1] == '#')
		x++;
	return (x);
}

static int		fig_vl(char **s)
{
	int			i;
	int			j;
	int			y;

	i = 0;
	y = 0;
	while (s[i] != NULL)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] == '#')
			{
				if (det_check(s, i, j) == 0)
					return (7);
				if (det_check(s, i, j) > 1)
					y++;
			}
			j++;
		}
		i++;
	}
	if (y < 1)
		return (5);
	return (1);
}

int				figure_valid(char **str)
{
	int			i;
	int			j;
	char		***s;

	i = 0;
	j = 0;
	if (!(s = figure_split(str)))
		return (0);
	while (s[i] && i < 27)
	{
		if ((j = fig_vl(s[i])) != 1)
			return (j);
		i++;
	}
	return (1);
}
