/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeder_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:35:13 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/24 18:18:45 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_freeder_3(char ***s)
{
	int		e;

	e = 0;
	while (s[e] != NULL)
		e++;
	free(s[e]);
	e = e - 1;
	while (e >= 0)
	{
		ft_freeder(s[e]);
		e--;
	}
	free(s);
}
