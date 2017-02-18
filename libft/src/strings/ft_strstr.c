/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:14:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/22 15:16:19 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** locates first occurence of little in big
*/

char	*ft_strstr(const char *big, const char *little)
{
	int				len;
	char			*ptr;

	ptr = (char *)big - 1;
	if (!*little)
		return (++ptr);
	while (*(++ptr))
	{
		len = 0;
		while (*(ptr++) == little[len] && little[len])
			len++;
		ptr -= (len + 1);
		if (!little[len])
			return (ptr);
	}
	return (NULL);
}
