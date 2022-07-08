/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:46:53 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 22:27:17 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned	char a;
	char			*tmp;

	a = (unsigned char)c;
	tmp = b;
	while (len)
	{
		*tmp = a;
		tmp++;
		len--;
	}
	return (b);
}
