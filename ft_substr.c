/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:55:08 by mleam             #+#    #+#             */
/*   Updated: 2020/05/13 11:37:16 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    count;
    size_t    size;
    char    *res;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    size = ft_strlen(s + start);
    if (size < len)
        len = size;
    res = (char *)malloc(sizeof(*res) * (len + 1));
    if (!res)
        return (NULL);
    count = 0;
    while (count < len)
    {
        res[count] = s[start + count];
        count++;
    }
    res[count] = '\0';
    return (res);
}
