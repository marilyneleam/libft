/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:57:18 by mleam             #+#    #+#             */
/*   Updated: 2020/05/08 10:51:50 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_split(char **a)
{
	size_t i;

	i = 0;
	if (a)
	{
		while (a[i])
		{
			free(a[i]);
			i++;
		}
		free(a);
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**a;
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	a = NULL;
	if (s == 0 || !(a = (char **)malloc(sizeof(char *) * (count(s, c) + 1))))
		return (ft_free_split(a));
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[start] != '\0' && !(a[k++] = ft_substr(s, start, i - start)))
			return (ft_free_split(a));
	}
	a[k] = NULL;
	return (a);
}
