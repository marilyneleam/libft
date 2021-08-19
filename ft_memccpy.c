/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 01:29:07 by mleam             #+#    #+#             */
/*   Updated: 2020/05/05 17:14:11 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char*)src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (NULL);
}
