/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:55:44 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/26 16:00:58 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	input_errors(int ac, char **av)
{
	(void)av;
	if (ac > 2 || ac == 1)
	{
		ft_putstr("Error");
		return (0);
	}
	if (number(av[1]) == 0)
	{
		ft_putstr("Error");
		return (0);
	}
	return (1);
}
