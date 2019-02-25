/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:59:35 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/24 20:00:58 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 0;
	if (argc == 2)
	{
		if ((s = filrd(argv[1])) == NULL)
		{
			ft_putstr("usage: fillit source_file\n");
			return (0);
		}
		solve_map(s);
	}
	if (argc != 2)
	{
		ft_putstr("usage: fillit source_file\n");
		return (0);
	}
	return (0);
}
