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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	len_snd;
	size_t	size;

	len_src = 0;
	len_dst = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dst[len_dst] != '\0')
		len_dst++;
	len_snd = len_src + len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	size = dstsize - len_dst - 1;
	while (*src != '\0' && size > 0)
	{
		dst[len_dst] = *src;
		src++;
		len_dst++;
		size--;
	}
	dst[len_dst] = '\0';
	return (len_snd);
}
