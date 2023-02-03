/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:38:15 by jhwang2           #+#    #+#             */
/*   Updated: 2022/07/20 18:10:39 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	recursion_p(int n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	recursion_p (n / 10, fd);
	c = (n % 10) + '0';
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == 0)
		write (fd, "0", 1);
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		n *= -1;
		write (fd, "-", 1);
		recursion_p (n, fd);
	}
	else
		recursion_p (n, fd);
}
