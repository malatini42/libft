/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:16:01 by malatini          #+#    #+#             */
/*   Updated: 2023/09/28 13:13:21 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Allocates and returns a fresh string ending with a '\0'.
** Represents the integer n given as argument.
** Negative numbers must be supported.
** NON STANDARD FUNCTION.
*/

static int	n_size(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*create_string(char *str, long nb, long length, long sign)
{
	str[length] = '\0';
	while (length > 0)
	{
		str[--length] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (sign < 0)
	{
		str[length++] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	length;
	long	nb;
	long	sign;

	nb = n;
	sign = 1;
	length = (long)n_size(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb < 0)
	{
		nb = -nb;
		sign = -sign;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
	{
		return (NULL);
	}
	str = create_string(str, nb, length, sign);
	return (str);
}
