/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:46:12 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/24 19:59:22 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			bmc(char **s)
{
	int		i;
	int		e;

	i = 0;
	e = 1;
	while (s[i])
	{
		if (s[i][0] == '\0')
			e++;
		i++;
	}
	return (e);
}
