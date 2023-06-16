/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:08:45 by jgasparo          #+#    #+#             */
/*   Updated: 2023/06/16 15:07:08 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 4096

char	*get_next_line(int fd);
int	ft_check(char *line);
char	*ft_substr(char *s, unsigned int start, size_t len);
size_t	ft_strlen(char *s);

#endif