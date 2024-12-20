/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 13:52:42 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_until_nl(int fd, char *output)
{
	int		line;
	char	*temp;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	while (1)
	{
		line = read(fd, temp, BUFFER_SIZE);
		if (line <= 0)
			break ;
		temp[line] = '\0';
		output = ft_strjoin(output, temp);
		if (ft_strchr(temp, '\n'))
			break ;
	}
	free(temp);
	return (output);
}

int	ft_find_nl(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*ft_extract_nstr(char *s)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_find_nl(s) + 2));
	if (!str)
		return (NULL);
	i = -1;
	while (++i <= ft_find_nl(s))
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
		line = ft_read_until_nl(fd, output);
		output = ft_substr(line, ft_find_nl(line) + 1,
				ft_strlen(line) - ft_find_nl(line) - 1);
		line = ft_extract_nstr(line);
		if (output && !output[0] && !line[0])
		{
			free(line);
			free(output);
			return (NULL);
		}
	}
	return (line);
}
