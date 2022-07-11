/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:47 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:19:45 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	int		i;

	if (dst == 0 || src == 0 || n == 0)
		return (dst);
	tmp1 = dst;
	tmp2 = src;
	while (*tmp1 != '\0')
		tmp1++;
	while (*tmp2 != '\0')
		tmp2++;
	if (tmp1 == tmp2)
	{
		ft_memmove (dst, src, n);
		return (dst);
	}
	i = 0;
	while (n)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	return (dst);
}
