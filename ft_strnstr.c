/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:42:52 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 13:28:18 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	len_needle;

	if (heystack == 0 || needle == 0 || len == 0)
		return (0);
	if (*needle == '\0')
		return (haystack);
	len_needle = 0;
	while (needle[len_needle])
		len_needle++;
	while (len)
	{
		if (*haystack == needle)
		{
			if (!(ft_strncmp (haystack, needle, len_needle)))
				return (haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
