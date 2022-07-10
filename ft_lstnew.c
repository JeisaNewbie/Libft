/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:58:44 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/07 17:47:22 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list = (t_list*)malloc(sizeof(t_list));
	list.content = content;
	list.next = 0;
	return (list);
}
