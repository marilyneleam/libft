/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 21:01:03 by mleam             #+#    #+#             */
/*   Updated: 2020/05/03 17:26:21 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == 0 && s == 0)
		return (NULL);
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		while (n != 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (d);
}
