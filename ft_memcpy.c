/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:34:40 by daikim            #+#    #+#             */
/*   Updated: 2020/02/18 16:06:28 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (!dest || !src)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (char*)src;
	while (n--)
		*(dest_ptr++) = *(src_ptr++);
	return (dest);
}
