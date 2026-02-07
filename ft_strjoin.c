/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:45:19 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/02 17:29:06 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;
	size_t	len1;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	len1 = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, len1 + 1);
	ft_strlcat(p, s2, len + 1);
	return (p);
}
