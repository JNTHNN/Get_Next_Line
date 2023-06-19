/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:21 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/19 20:26:08 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_check(char *line)
{
	int	i;

	i = 0;
	if (line[i] == '\n')
		return (1);
	i++;
	return (0);
}

char	*ft_line(int fd, char *s)
{
	int		line;
	char	*test;

	test = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!test)
		return (NULL);
	line = 1;
	while (line > 0)
	{
		line = read(fd, test, BUFFER_SIZE);
		test[line] = '\0';
		s = ft_strjoin(s, test);
		if (ft_strchr(test, '\n'))
			break ;
	}
	free(test);
	return (s);
}

int	ft_nextline(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*ft_nextstr(char *s)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_nextline(s) + 2));
	if (!str)
		return (NULL);
	i = -1;
	while (++i <= ft_nextline(s))
		str[i] = s[i];
	str[i] = '\0';
	free(s);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*output;

	if (fd < 0 || !fd || BUFFER_SIZE <= 0)
		return (NULL);
	else
	{
		line = ft_line(fd, output);
		output = ft_substr(line, ft_nextline(line) + 1, ft_strlen(line) - ft_nextline(line) - 1);
		line = ft_nextstr(line);
		if (output && !output[0] && !line[0])
		{
			free(line);
			free(output);
			return (NULL);
		}
	}
	return (line);
}