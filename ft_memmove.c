/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:35:29 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:26:10 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	issame(void *dst, const void *src)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = dst;
	tmp2 = src;
	while (*tmp1)
		tmp1++;
	while (*tmp2)
		tmp2++;
	if (tmp1 == tmp2)
		return (1);
	return (0);
}

char	*ft_buff(const void *src)
{
	char	*tmp;
	int		i;

	i = 0;
	while (src[i] == '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	int		i;

	if (dst == 0 || src == 0 || len == 0)
		return (dst);
	i = 0;
	if (issame(dst, src) && dst > src)
		tmp = ft_buff (src);
	else
		tmp = src;
	while (len)
	{
		dst[i] = tmp[i];
		i++;
		len--;
	}
	return (dst);
}
