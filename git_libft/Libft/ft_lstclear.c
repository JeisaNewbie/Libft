/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:31:04 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/07 17:18:14 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	del(void *content)
{
	free (content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmplist;
	
	while (*lst)
	{
		del((*lst).content);
		tmplist = *lst;
		*lst = (*lst).next;
		free(tmplist);
	}
}
