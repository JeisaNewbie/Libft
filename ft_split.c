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

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	*make_arr(char *str, char *charset, int arr_size)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	arr = (int *)malloc(sizeof(int) * arr_size);
	if (arr == 0)
		return (arr);
	while (charset[j])
	{
		while (i < arr_size)
		{
			if (j == 0)
				arr[i] = 0;
			if (str[i] == charset[j])
				arr[i] = 1;
			i++;
		}
		j++;
		i = 0;
	}
	return (arr);
}

int	str_count(char *str, int *arr, int size)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	i = 0;
	count = 0;
	while (j < size)
	{
		if (arr[i] == 0)
		{
			while (arr[i] == 0 && str[i] != '\0')
			{
				i++;
				j++;
			}
			count++;
		}
		j++;
		i++;
	}
	return (count);
}

char	*indiv_str(char *str, int *arr, int arr_size, int i)
{
	char	*tmp;
	int		count;
	int		start_index;

	count = 0;
	start_index = 0;
	tmp = (char *)malloc(sizeof(char) * arr_size + 1);
	if (tmp == 0)
		return (tmp);
	while (i < arr_size)
	{
		while (arr[i] == 0)
		{
			count++;
			tmp[start_index++] = str[i];
			arr[i++] = 1;
		}
		if (count > 0)
			break ;
		i++;
	}
	tmp[count] = '\0';
	return (tmp);
}

char	**ft_split(char *str, char *charset)
{
	char	**return_s;
	int		*arr;
	int		count_s;
	int		i;

	i = 0;
	arr = make_arr (str, charset, str_len(str));
	count_s = str_count (str, arr, str_len(str));
	return_s = (char **)malloc(sizeof(char *) * count_s + 1);
	while (i < count_s)
	{
		return_s[i] = indiv_str (str, arr, str_len(str), 0);
		i++;
	}
	return_s[count_s] = 0;
	return (return_s);
}
