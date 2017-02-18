/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:34:13 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 17:40:23 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** applies f to all characters in s, returns the newmade string
*/

char				*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;
	char			*dest;

	i = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((dest = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (str != NULL && *str)
		*(dest++) = f(*(str++));
	*dest = '\0';
	return (dest - i);
}
