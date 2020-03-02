/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:36:20 by daikim            #+#    #+#             */
/*   Updated: 2020/02/18 15:47:36 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;

	if (!dst || !src)
		return (NULL);
	dst_ptr = (char *)dst;
	src_ptr = (const char *)src;
	if (dst_ptr < src_ptr)
		return (ft_memcpy(dst, src, len));
	while (len--)
		dst_ptr[len] = src_ptr[len];
	return (dst);
}
