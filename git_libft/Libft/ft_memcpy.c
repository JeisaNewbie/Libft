/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:48:04 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 22:17:30 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 다시 확인 해야됨
char	*ft_memcpy(char *destaddr, char *srcaddr, int n)
{
	char	*dest;

	dest = destaddr;
	while (n-- > 0)
	{
		*destaddr++ = *srcaddr++;
	}
	return (dest);
}
