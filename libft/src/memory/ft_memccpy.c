/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:45:28 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 16:05:23 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies src to dst until c is found in src, return ptr to dst from c
*/

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		d;
	unsigned char		*ptrdst;
	unsigned const char	*ptrsrc;

	i = 0;
	d = (unsigned char)c;
	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned const char*)src;
	while (i < n)
	{
		if ((*ptrdst++ = *ptrsrc++) == d)
			return (ptrdst);
		i++;
	}
	return (NULL);
}
