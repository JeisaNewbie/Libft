/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:07:45 by jhwang2           #+#    #+#             */
/*   Updated: 2022/06/09 00:11:48 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len1(char **strs, int size)
{
	int	strlen;
	int	i;
	int	j;

	strlen = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			strlen++;
			j++;
		}
		i++;
		j = 0;
	}
	return (strlen);
}

void	ft_strcat(char *dest, char *src)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = dest;
	while (*tmp != '\0')
	{
		tmp++;
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tmp;
	int		total_len;
	int		i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	total_len = str_len1(strs, size) + (i * (size - 1)) + 1;
	if (size == 0)
	{
		tmp = (char *)malloc(sizeof(char) * 1);
		return (tmp);
	}
	else
		tmp = (char *)malloc(sizeof(char) * total_len);
	tmp[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(tmp, strs[i]);
		if (i < size -1)
			ft_strcat(tmp, sep);
		i++;
	}
	return (tmp);
}
