/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:07:25 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 15:55:03 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** free the memory of the link and all following links
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *newlst;
	t_list *nextlst;

	newlst = *alst;
	while (newlst)
	{
		nextlst = newlst->next;
		del(newlst->content, newlst->content_size);
		free(newlst);
		newlst = nextlst;
	}
	*alst = NULL;
}
