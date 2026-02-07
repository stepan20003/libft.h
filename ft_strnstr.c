/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:02:45 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/01 15:26:29 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*src == '\0')
		return ((char *)dest);
	while (i < len && dest[i])
	{
		j = 0;
		while (i + j < len && dest[i + j] && src[j]
			&& dest[i + j] == src[j])
			j++;
		if (src[j] == '\0')
			return ((char *)&dest[i]);
		i++;
	}
	return (NULL);
}
