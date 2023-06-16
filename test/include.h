/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:36 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/26 16:06:01 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 4096

int		input_errors(int ac, char **av);
void	ft_putstr(char *str);
int		ft_open(void);
int		number(char *str);

#endif
