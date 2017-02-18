/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:00:23 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/22 15:09:22 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** locates last occurence of c in s, returns a ptr to c
*/

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char*)s;
		s++;
	}
	if (*s == (char)c)
		ptr = (char*)s;
	return (ptr);
}
