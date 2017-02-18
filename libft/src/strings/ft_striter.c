/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:52:28 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 13:55:39 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** applies f to all characters in s
*/

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	ptr = s;
	if (s && f)
	{
		while (*ptr)
		{
			f(ptr);
			ptr++;
		}
	}
}
