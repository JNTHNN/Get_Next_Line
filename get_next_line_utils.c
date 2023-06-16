/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:49 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/16 15:07:01 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t 	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if (s_len - start < len)
		len = s_len - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[start] && (s_len < len))
	{
		substr[s_len] = s[start];
		s_len++;
		start++;
	}
	substr[s_len] = '\0';
	return (substr);
}