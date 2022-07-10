/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:17:53 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/06 18:51:15 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// calloc apple source 복붙
// 다시 작성 해야됨
PTR
calloc (nelem, elsize)
  size_t nelem, elsize;
{
  register PTR ptr;  

  if (nelem == 0 || elsize == 0)
    nelem = elsize = 1;
  
  ptr = malloc (nelem * elsize);
  if (ptr) bzero (ptr, nelem * elsize);
  
  return ptr;
}
