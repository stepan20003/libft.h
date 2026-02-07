/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:08:58 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/07 16:23:33 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr;

	arr = malloc(sizeof(t_list));
	if (!arr)
		return (NULL);
	arr->content = content;
	arr->next = NULL;
	return (arr);
}
