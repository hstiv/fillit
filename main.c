/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:59:35 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/23 18:04:15 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		i = filrd(argv[1]);
		if (i != 1)
		{
			ft_putstr("usage: fillit source_file\n");
			return (0);
		}
	}
	return (1);
}
