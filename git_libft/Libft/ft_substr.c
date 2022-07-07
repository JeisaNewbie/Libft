/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:44:37 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 18:50:28 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*ret;

	if (!s)
		return (0);
	if !(ret = (char *)malloc(sizeof(char) * len + 1))
		return (0);
	len_s = ft_strlen(s);
	i = 0;
	while (i < len && start + i < len_s)
	{
		ret[i] = s[start + i];
		i++;
	}
	result[i] = 0;
	return (ret);
}
