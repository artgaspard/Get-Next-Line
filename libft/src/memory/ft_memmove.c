/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:00:45 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 16:44:47 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** copies len bytes from src to dst
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *psrc;
	unsigned char *pdst;

	psrc = (unsigned char*)src;
	pdst = (unsigned char*)dst;
	while ((int)--len >= 0)
	{
		if (psrc < pdst)
			*(pdst + len) = *(psrc + len);
		else
			*(pdst++) = *(psrc++);
	}
	return (dst);
}
