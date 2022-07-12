/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:43:39 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 09:43:53 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	check_same(char c, char const *set)
{
	int	check;
	int	i;

	check = 0;
	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			check = 1;
		i++;
	}
	return (check);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		len_s1;
	int		check_f;
	int		check_l;

	if (s1 == 0 || set == 0)
		return (0);
	len_s1 = ft_strlen(s1);
	tmp = (char *)malloc(sizeof(char) * len_s1 + 1);
	if (tmp == 0)
		return (0);
	check_f =  check_same (s1[0], set);
	check_l =  check_same (s1[len_s1 - 1]);
	if (check_f == 1 && check_l == 1)
		ft_strlcpy (tmp, &s1[1], len_s1);
	else if (check_f == 1 && check_l == 0)
		ft_strlcpy (tmp, &s1[1], len_s1 + 1);
	else if (check_f == 0 && check_l == 1)
		ft_strlcpy (tmp, s1, len_s1);
	else
		ft_strlcpy (tmp, s1, len_s1 +1);
	return (tmp);
}
