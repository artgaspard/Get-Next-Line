/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:15:05 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 17:15:47 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** allocates memory to copy s1, does copy, returns ptr to it
*/

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if ((dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == 0)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}
