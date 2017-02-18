/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:52:38 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/22 15:18:32 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** returns a section of s beginning at start and for len size
*/

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sect;
	char			*str;
	unsigned int	i;

	str = (char*)s;
	i = 0;
	if ((sect = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (str != NULL && str[i + start] && len--)
	{
		sect[i] = str[i + start];
		i++;
	}
	sect[i] = '\0';
	return (sect);
}
