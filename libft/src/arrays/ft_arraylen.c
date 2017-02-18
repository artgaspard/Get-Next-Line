/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 16:54:06 by agaspard          #+#    #+#             */
/*   Updated: 2016/12/14 16:58:58 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** returns len size of array
*/

size_t		ft_arraylen(const void *array)
{
	size_t	size;

	size = 0;
	while (((void **)array)[size] != NULL)
		size++;
	return (size);
}
