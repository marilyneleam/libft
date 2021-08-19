/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:21:44 by mleam             #+#    #+#             */
/*   Updated: 2020/05/05 17:12:58 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (!(tab = malloc(size * nmemb)))
		return (NULL);
	if (nmemb == 0 && size == 0)
		return (tab);
	ft_memset(tab, 0, nmemb * size);
	return (tab);
}
