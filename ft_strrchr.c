/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:28:19 by daikim            #+#    #+#             */
/*   Updated: 2020/02/18 15:28:21 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int cnt;

	cnt = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		cnt++;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	while (cnt >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		cnt--;
		s--;
	}
	return (NULL);
}
