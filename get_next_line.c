/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:21 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/21 18:06:55 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_newline(int fd, char *s)
{
	int		line;
	char	*temp;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	line = 1;
	while (line > 0)
	{
		line = read(fd, temp, BUFFER_SIZE);
		if (line <= 0)
			break ;
		temp[line] = '\0';
		s = ft_strjoin(s, temp);
		if (ft_strchr(temp, '\n'))
			break ;
	}
	free(temp);
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

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	else
	{
		line = ft_newline(fd, output);
		output = ft_substr(line, ft_nextline(line) + 1, ft_strlen(line) - ft_nextline(line) - 1);
		line = ft_nextstr(line);
		if (line && output && !output[0] && !line[0])
		{
			free(line);
			free(output);
			return (NULL);
		}
	}
	return (line);
}