/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:14:54 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 14:05:18 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** returns a copy of str without white spaces at the beginning and end of str
*/

static int	ft_len(char *str)
{
	int		len;

	len = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (*(str))
	{
		len++;
		str++;
	}
	if (len)
		str--;
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		len--;
		str--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	int		tmp;
	char	*dst;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)s;
	len = ft_len(str);
	if ((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	tmp = len;
	while (len--)
		*(dst++) = *(str++);
	*dst = '\0';
	return (dst - tmp);
}
