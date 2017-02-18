/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:38:45 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 18:34:58 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** locates len characters of little in big
*/

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*large;
	char	*small;
	size_t	i;

	large = (char*)big;
	small = (char*)little;
	if (*small == '\0')
		return (large);
	i = ft_strlen(small);
	while (*large && len-- >= i)
	{
		if (*large == *small && ft_memcmp(large, small, i) == 0)
			return (large);
		large++;
	}
	return (NULL);
}
