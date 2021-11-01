/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:40:08 by malatini          #+#    #+#             */
/*   Updated: 2021/02/21 12:59:13 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer ’n’ to the given file descriptor.
*/

void	ft_putnbr_fd(int n, int fd)
{
	long temp;
	long nb;

	nb = n;
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	temp = nb % 10 + '0';
	write(fd, &temp, 1);
}
