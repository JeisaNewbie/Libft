/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:36:58 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:29:16 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*tmp;

	if (b == 0 || !(0 <= c && c <= 255) || len == 0)
		return (0);
	a = (unsigned char)c;
	tmp = (char *)b;
	while (len)
	{
		*tmp = a;
		tmp++;
		len--;
	}
	return (b);
}
