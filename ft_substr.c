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
	char	*substr;
	int		i;

	i = 0;
	if (s == 0 || len == 0)
		break ;
	else
	{
		while (s[i])
			i++;
		if (i <= start)
			return (0);
	}
	substr = (char*)malloc(sizeof(char) * len + 1);
	if (substr == 0)
		return (0);
	i = 0;
	while (len && s[start] != 0)
	{
		s[start] = substr[i];
		i++;
		len--;
	}
	substr[i] = 0;
	return (substr);
}
