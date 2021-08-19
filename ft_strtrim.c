/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:37:49 by mleam             #+#    #+#             */
/*   Updated: 2020/05/08 10:58:09 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*a;

	i = 0;
	if (!set || !s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	len = ft_strlen(&s1[i]);
	if (len != 0)
	{
		while (s1[i + len - 1] != '\0' && ft_strchr(set, s1[i + len - 1]))
		{
			len--;
		}
	}
	a = ft_substr(s1, i, len);
	return (a);
}
