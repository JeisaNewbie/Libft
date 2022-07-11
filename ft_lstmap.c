/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:25:11 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 09:09:10 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	newlist = 0;
	while (lst)
	{
		ft_lstadd_back (&newlist, ft_lstnew (f(lst->content)));
		if (ft_lstnew (f(lst->content)) == 0)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		lst = lst->next;
	}
	return (newlist);
}
