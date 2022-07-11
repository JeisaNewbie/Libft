/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:44:08 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 14:56:59 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		len_s;
	int		i;

	while (s[len_s])
		len_s++;
	if (len_s < start)
		return (0);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp == 0)
		return (0);
	i = 0;
	while (len)
	{
		tmp[i] = s[start];
		i++;
		start++;
		len--;
	}
	tmp[i] = '\0';
	return (tmp);
}
