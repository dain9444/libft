/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:36:14 by daikim            #+#    #+#             */
/*   Updated: 2020/02/19 10:27:36 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		digit_len(int n, int *isnegative)
{
	int				digits;
	unsigned int	un;

	digits = 1;
	if (n < 0)
	{
		digits++;
		*isnegative = 1;
		un = -1 * n;
	}
	else
		un = n;
	while (un >= 10)
	{
		digits++;
		un /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				digits;
	int				isnegative;
	unsigned int	un;

	isnegative = 0;
	digits = digit_len(n, &isnegative);
	if (!(str = ft_strnew(digits)))
		return (NULL);
	un = (n < 0) ? -n : n;
	while (digits)
	{
		str[digits - 1] = un % 10 + '0';
		un /= 10;
		digits--;
	}
	if (isnegative)
		str[0] = '-';
	return (str);
}
