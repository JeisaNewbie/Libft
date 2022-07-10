/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:47:31 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 18:50:42 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(char *src)
{
	int		str_length;
	char	*dest;

	if (src == 0)
		return (0);
	str_length = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * str_length + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, src, str_length);
	dest[str_length] = '\0';
	return (dest);
}
