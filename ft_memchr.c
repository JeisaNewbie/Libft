/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:34:22 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:19:04 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;

	if (s == 0 || !(0 <= c && c <= 255) || n == 0)
		return (0);
	ch = (unsigned char)c;
	while (*s != '\0' || n)
	{
		if (*s == ch)
			return (s);
		s++;
		n--;
	}
	return (0);
}
