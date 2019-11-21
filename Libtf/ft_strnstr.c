/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:03:17 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/19 17:37:23 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	aux;

	if (!*needle)
		return ((char *)haystack);
	cont = 0;
	while (haystack[cont] != '\0' && cont < len)
	{
		if (haystack[cont] == needle[0])
		{
			aux = 1;
			while (needle != '\0' && haystack[cont] == needle[aux])
				aux++;
			if (needle[aux] == '\0')
				return ((char *)&haystack[cont]);
		}
		cont++;
	}
	return (NULL);
}
