/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 01:23:32 by mleam             #+#    #+#             */
/*   Updated: 2020/05/10 10:37:36 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	element = *lst;
	if (*lst && del)
	{
		while (*lst)
		{
			element = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = element;
		}
		lst = NULL;
	}
}
