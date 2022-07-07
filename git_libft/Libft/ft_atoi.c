/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:53:47 by jhwang2           #+#    #+#             */
/*   Updated: 2022/06/05 11:48:54 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_string(char *str);

int	minus_atoi(char *str, int minus)
{
	if ((9 <= *str && *str <= 13) || *str == ' ')
	{
		while (((9 <= *str && *str <= 13) || *str == ' ') && *str != '\0')
			str++;
	}
	if (*str == '-' || *str == '+')
	{
		while ((*str == '-' || *str == '+') && *str != '\0')
		{
			if (*str == '-')
				minus *= -1;
			str++;
		}
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
		if (!('0' <= *(str + 1) && *(str + 1) <= '9'))
			return (return_atoi);
		str++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	return (minus_atoi(str, 1));
}
