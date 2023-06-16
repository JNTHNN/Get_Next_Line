/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:42:28 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/15 15:28:23 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static char *gnl(int fd)
{
	int		ret;
	char	*buf;
	
	buf = NULL;
	ret = (int)read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	return (buf);
}

int	ft_open(void)
{
	int		fd;
	char	*ww;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error \n");
		return (1);
	}
	ww = gnl(fd);
	ft_putstr(ww);
	if (close(fd) == -1)
	{
		ft_putstr("Error \n");
		return (1);
	}
	return (0);
}
