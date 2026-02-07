/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:45:14 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/02 17:29:52 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
