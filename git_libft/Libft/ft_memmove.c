/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:06:24 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 22:17:42 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	p_dst = dst;
	p_src = (unsigned char *)src;
	if (dst < src)
	{
		while (i++ < n)
			*p_dst++ = *p_src++;
	}
	else
	{
		while (i < n)
		{
			p_dst[n - i - 1] = p_src[n - i - 1];
			i++;
		}
	}
	return (dst);
}
