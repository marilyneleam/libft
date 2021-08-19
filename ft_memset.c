/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 22:37:20 by mleam             #+#    #+#             */
/*   Updated: 2020/04/28 22:38:09 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*bis;
	size_t			i;

	bis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(bis + i) = c;
		i++;
	}
	return (bis);
}
