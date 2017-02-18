/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:41:56 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 17:45:13 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** append n characters of s2 to the end of s1
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *ps1;
	char *ps2;

	ps1 = (char*)s1;
	ps2 = (char*)s2;
	while (*ps1)
		ps1++;
	while (*ps2 && n--)
	{
		*ps1++ = *ps2++;
	}
	*ps1 = '\0';
	return (s1);
}
