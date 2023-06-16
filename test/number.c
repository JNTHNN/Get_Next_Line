/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:57:26 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/26 14:57:34 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	number(char *str)
{
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
			str++;
		else
			return (0);
	}
	return (1);
}