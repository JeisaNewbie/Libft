/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:00:50 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 09:00:54 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
