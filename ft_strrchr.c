/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:42:06 by mleam             #+#    #+#             */
/*   Updated: 2020/04/28 18:22:10 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*bis;
	size_t	size;

	bis = (char *)s;
	size = ft_strlen(bis);
	while (bis[size] != c && size != 0)
		size--;
	if (bis[size] == c)
		return (&bis[size]);
	else
		return (NULL);
}
