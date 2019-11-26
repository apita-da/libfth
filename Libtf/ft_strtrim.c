/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 17:55:18 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/26 16:46:05 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		cont;
	int		aux;

	if (!s1 || !set)
		return (NULL);
	if (!(str = malloc(sizeof (char) * ft_strlen(s1))))
		return (NULL);
	cont = 0;
	while (s1 != '\0')
	{
		aux = 0;
		while (set)
		{
			aux++;
		}
	
	}
}
