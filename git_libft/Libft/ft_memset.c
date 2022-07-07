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

void	*memset(void *ptr, int what, size_t len)
{
	size_t			i;
	unsigned char	*ptr_temp;
	unsigned char	cpy;

	i = 0;
	ptr_temp = ptr;
	cpy = what;
	while (i++ < len)
		*ptr_temp++ = cpy;
	return (ptr);
}
