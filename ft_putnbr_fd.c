/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 17:28:20 by mleam             #+#    #+#             */
/*   Updated: 2020/05/02 17:43:52 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l > 9)
	{
		ft_putnbr_fd((l / 10), fd);
		ft_putnbr_fd((l % 10), fd);
	}
	else
		ft_putchar_fd((l + '0'), fd);
}
