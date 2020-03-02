/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:29:31 by daikim            #+#    #+#             */
/*   Updated: 2020/02/19 14:54:16 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!(s[i] == c))
		{
			cnt++;
			while (s[i] && !(s[i] == c))
				i++;
		}
	}
	return (cnt);
}

void	malloc_words(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	wordlen;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		wordlen = 0;
		while (s[i] && !(s[i] == c))
		{
			wordlen++;
			i++;
		}
		if (wordlen != 0)
		{
			res[j] = (char*)malloc(sizeof(char) * (wordlen + 1));
			j++;
		}
	}
	res[j] = (char *)malloc(sizeof(char));
}

void	fill_words(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && !(s[i] == c))
		{
			res[j][k] = s[i];
			i++;
			k++;
		}
		if (k > 0)
		{
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = 0;
}

char	**ft_strsplit(char const *s, char c)
{
	int		wordcnt;
	char	**res;

	if (!s)
		return (NULL);
	wordcnt = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (wordcnt + 1));
	malloc_words(res, s, c);
	fill_words(res, s, c);
	return (res);
}
