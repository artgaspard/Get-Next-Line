/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:12:57 by agaspard          #+#    #+#             */
/*   Updated: 2017/01/12 15:16:33 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** copies n bytes from src to dst
*/

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptrdst;
	const char		*ptrsrc;

	i = 0;
	ptrdst = dst;
	ptrsrc = src;
	while (i < n)
	{
		*ptrdst++ = *ptrsrc++;
		i++;
	}
	return (dst);
}
