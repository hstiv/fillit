/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 20:33:47 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/27 15:19:57 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_freeder(char **s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}