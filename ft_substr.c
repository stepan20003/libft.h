/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:36:29 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/02 15:37:49 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*ptr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	else if (slen - start <= len)
		return (ft_strdup(&s[start]));
	else
		ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
