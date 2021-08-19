/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 00:27:45 by mleam             #+#    #+#             */
/*   Updated: 2020/04/29 01:27:57 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bis;
	size_t			i;

	bis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (bis[i] == (unsigned char)c)
			return (&bis[i]);
		i++;
	}
	return (NULL);
}
