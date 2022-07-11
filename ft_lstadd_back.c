/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:07:51 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 09:04:08 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmplst;

	if (list == 0 || new == 0)
		return ;
	else if (*list == 0 && new != 0)
		*list = new;
	else
	{
		tmplst = ft_lstlast(*lst);
		tmplst->next = new;
	}
}
