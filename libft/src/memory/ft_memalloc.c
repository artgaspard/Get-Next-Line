/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:33:38 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 16:03:45 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates new memory space
*/

void	*ft_memalloc(size_t size)
{
	char *mem;

	if ((mem = (char*)malloc(sizeof(char) * size)) == 0)
		return (NULL);
	while ((int)--size >= 0)
		*(mem + size) = '\0';
	return (mem);
}
