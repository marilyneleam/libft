/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 14:35:16 by mleam             #+#    #+#             */
/*   Updated: 2020/05/08 11:02:00 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;

	i = 0;
	if (s == 0 || !(a = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	else
	{
		while (i < ft_strlen(s))
		{
			a[i] = (*f)(i, s[i]);
			i++;
		}
		a[i] = '\0';
	}
	return (a);
}
