/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:44:08 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/18 15:41:16 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*tmp;
	int		large;

	len_s = ft_strlen(s);
	large = 0;
	if (len_s <= len)
	{
		tmp = (char *)malloc(sizeof(char) * (len_s + 1));
		large = 1;
	}
	else
		tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == 0)
		return (0);
	if (len_s < start)
	{
		tmp[0] = 0;
		return (tmp);
	}
	if (large == 1)
		ft_strlcpy (tmp, &s[start], len_s + 1);
	else
		ft_strlcpy (tmp, &s[start], len + 1);
	return (tmp);
}
