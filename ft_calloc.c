/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:58:59 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:04:37 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count == 0 || size == 0)
		return (0);
	tmp = (void *)malloc(sizeof(size) * count);
	if (tmp == 0)
		return (0);
	return (tmp);
}
