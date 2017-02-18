/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:43:26 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 16:58:44 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** append s2 to the end of s1 + \0
*/

char	*ft_strcat(char *s1, const char *s2)
{
	char *ps1;
	char *ps2;

	ps1 = (char*)s1;
	ps2 = (char*)s2;
	while (*ps1)
		ps1++;
	while (*ps2)
		*(ps1++) = *(ps2++);
	*ps1 = '\0';
	return (s1);
}
