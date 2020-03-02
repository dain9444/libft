/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:52 by daikim            #+#    #+#             */
/*   Updated: 2020/02/19 13:07:02 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		start;
	int		end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] && (s[start] == ' ' ||
				s[start] == '\n' || s[start] == '\t'))
		start++;
	while (end > 0 && (s[end - 1] == ' ' ||
				s[end - 1] == '\n' || s[end - 1] == '\t'))
		end--;
	if (end < start)
		end = start;
	if (!(res = ft_strnew(end - start)))
		return (NULL);
	return (ft_strncpy(res, s + start, end - start));
}
