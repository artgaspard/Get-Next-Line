/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:45:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 19:12:49 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** compares s1 and s2, if identical returns 1, otherwise 0
*/

int			ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (char*)s1 - 1;
	str2 = (char*)s2 - 1;
	while (*(++str1) == *(++str2) && *str1 && *str2)
		;
	if (!(*str1) && !(*str2))
		return (1);
	return (0);
}
