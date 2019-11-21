/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:08:01 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/21 17:03:34 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		cont;
	int		rest;
	int		sign;

	cont = 0;
	rest = 0;
	sign = 1;
	while (str[cont] == ' ' || str[cont] == '\t' || str[cont] == '\f'
			|| str[cont] == '\v' || str[cont] == '\n' || str[cont] == '\r')
		cont++;
	while (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			sign = -1;
		cont++;
	}
	while (str[cont] <= '9' && str[cont] >= '0')
	{
		rest = (rest * 10) + (str[cont] - 48);
		cont++;
	}
	return (rest * sign);
}
