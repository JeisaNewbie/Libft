/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:09:53 by jhwang2           #+#    #+#             */
/*   Updated: 2022/06/01 20:05:42 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	addsnd;
	unsigned int	dstsize;

	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	addsnd = len_src + len_dest;
	if (size <= len_dest)
		return (size + len_src);
	dstsize = size - len_dest - 1;
	while (*src != '\0' && dstsize > 0)
	{
		dest[len_dest] = *src;
		src++;
		len_dest++;
		dstsize--;
	}
	dest[len_dest] = '\0';
	return (addsnd);
}
