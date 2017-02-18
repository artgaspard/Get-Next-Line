/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:06:52 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/22 15:36:04 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** applies f to all characters in s, precising i as first argument, returns
 ** newmade string
*/

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*dest;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((dest = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (str != NULL && *str)
		*(dest++) = f(j++, *(str++));
	*dest = '\0';
	return (dest - i);
}
