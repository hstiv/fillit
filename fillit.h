/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:38:29 by hstiv             #+#    #+#             */
/*   Updated: 2019/02/24 20:06:35 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# include <string.h>

# define BUFF_SIZE 546

int			mass_count(char **s);
void			ft_freeder(char **s);
int			ft_cntchr(const char *ptr, int c);
void			ft_freeder_3(char ***s);
int				bmc(char **s);
int				fig_count(char *s);
int				file_valid(char *ptr);
int				figure_valid(char **str);
char			*filrd(char *file_name);
char			**ft_strsplit_wtsp(char const *s, char c);
char			***figure_split(char **str);

#endif
