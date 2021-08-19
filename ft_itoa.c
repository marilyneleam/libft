/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:26:10 by mleam             #+#    #+#             */
/*   Updated: 2020/05/08 19:00:21 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n = n * (-1);
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_len(nb);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
	}
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (len != 0 && nb > 0)
	{
		str[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
