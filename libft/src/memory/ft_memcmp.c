/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:37:47 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/26 12:16:47 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** compares n bytes in s1 and s2, returns 0 if identical / s1 - s2 otherwise
*/

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char*)(s1 - 1);
	ptr2 = (unsigned char*)(s2 - 1);
	if (!n)
		return (0);
	while ((--n) + 1 && *(++ptr1) == *(++ptr2))
		;
	return (*ptr1 - *ptr2);
}
