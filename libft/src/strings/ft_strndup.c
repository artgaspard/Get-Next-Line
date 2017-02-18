/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 12:49:07 by agaspard          #+#    #+#             */
/*   Updated: 2016/12/14 17:08:07 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** copies n characters from s in cpy, returns cpy
*/

char				*ft_strndup(const char *s, size_t n)
{
	unsigned int	i;
	char			*cpy;

	if ((cpy = (char*)malloc(sizeof(*cpy) * (n + 1))) == 0)
		return (NULL);
	i = 0;
	while (*s && i < n)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
