/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:18:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 19:07:05 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** applies f to all characters in s, precising i as first argument
*/

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = s;
	if (s && f)
	{
		while (*ptr)
		{
			f(i, ptr);
			i++;
			ptr++;
		}
	}
}
