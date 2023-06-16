/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:21 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/16 15:14:09 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_check(char *line)
{
	int	i;

	i = 0;
	if (line[i] == '\n' || line[i] == '\0' || line)
		return (1);
	i++;
	return (0);
}

char	*get_next_line(int fd)
{
	int		line;
	char	*test;

	test = malloc(sizeof(char *) + 1);
	if (!test)
		return (NULL);
	line = read(fd, test, BUFFER_SIZE);
	if (ft_check(test) == 1)
		ft_substr(test, ft_strlen(test) - 1, line);
	test[line] = '\0';
	return (test);
}