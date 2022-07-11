/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:53:47 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/11 13:39:07 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_string(char *str);

int	minus_atoi(const char *str, int minus)
{
	if ((9 <= *str && *str <= 13) || *str == ' ')
	{
		while (((9 <= *str && *str <= 13) || *str == ' ') && *str != '\0')
			str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	if ('0' <= *str && *str <= '9')
		return (minus * check_string(str));
	return (0);
}

int	check_string(char *str)
{
	int	return_atoi;

	return_atoi = 0;
	while (*str != '\0' && ('0' <= *str && *str <= '9'))
	{
		return_atoi = return_atoi * 10 + (*str - '0');
		str++;
	}
	return (return_atoi);
}

int	ft_atoi(const char *str)
{
	return (minus_atoi(str, 1));
}
