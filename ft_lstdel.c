/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:37:27 by daikim            #+#    #+#             */
/*   Updated: 2020/02/18 15:37:28 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cur;
	t_list	*tmp;

	cur = *alst;
	while (cur)
	{
		tmp = cur;
		ft_lstdelone(&cur, del);
		cur = tmp->next;
	}
	*alst = NULL;
}
