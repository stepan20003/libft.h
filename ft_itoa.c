/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ststepan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:35:39 by ststepan          #+#    #+#             */
/*   Updated: 2026/02/07 16:28:45 by ststepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_count(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	ft_char_copy(long n)
{
	char	c;

	if (n < 0)
		n = -n;
	c = n % 10 + '0';
	return (c);
}

char	*ft_itoa(int n)
{
	int		count;
	int		i;
	char	*str;
	long	nb;
	int		sing;

	nb = n;
	sing = (nb < 0);
	count = ft_number_count(nb);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nb < 0)
		str[0] = '-';
	i = count - 1;
	while (i >= sing)
	{
		str[i] = ft_char_copy(nb);
		nb = nb / 10;
		i--;
	}
	return (str);
}
