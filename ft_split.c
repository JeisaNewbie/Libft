/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:52:51 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 09:39:00 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*make_arr(char *str, char c, int str_size)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * str_size + 1);
	if (arr == 0)
		return (arr);
	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = 0;
		if (str[i] == c)
			arr[i] = 1;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	str_count(char *str, int *arr, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (arr[i] == 0)
		{
			while (arr[i] == 0 && str[i] != '\0')
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*indiv_str(char *str, int *arr, int str_size, int i)
{
	char	*tmp;
	int		s_len;
	int		start_index;

	s_len = 0;
	start_index = 0;
	tmp = (char *)malloc(sizeof(char) * str_size + 1);
	if (tmp == 0)
		return (0);
	while (i < str_size)
	{
		while (arr[i] == 0)
		{
			s_len++;
			tmp[start_index++] = str[i];
			arr[i++] = 1;
		}
		if (s_len > 0)
			break ;
		i++;
	}
	tmp[count] = '\0';
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**return_s;
	int		*arr;
	int		count_s;
	int		i;

	i = 0;
	arr = make_arr (s, c, ft_strlen(s));
	count_s = str_count (s, arr, ft_strlen(s));
	return_s = (char **)malloc(sizeof(char *) * count_s + 1);
	while (i < count_s)
	{
		return_s[i] = indiv_str (s, arr, ft_strlen(s), 0);
		i++;
	}
	return_s[count_s] = 0;
	return (return_s);
}
