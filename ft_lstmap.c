/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daikim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:27:45 by daikim            #+#    #+#             */
/*   Updated: 2020/02/19 14:10:13 by daikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cur;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	if (!(tmp = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	tmp = f(tmp);
	cur = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(cur->next = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		cur->next = f(cur->next);
		cur = cur->next;
	}
	return (tmp);
}
