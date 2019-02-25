/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:38:29 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/21 18:08:06 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# include <string.h>

# define BUFF_SIZE 546

int				bmc(char **s);
void			ft_free_3m(char ***s, char **str);
int				file_valid(char *ptr);
int				figure_valid(char **str);
int				filrd(char *file_name);
char			**ft_strsplit_wtsp(char const *s, char c);
char			***figure_split(char **str);

#endif
