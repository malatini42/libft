/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:27:58 by malatini          #+#    #+#             */
/*   Updated: 2021/01/10 08:29:06 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares byte string s1 against byte string s2.
** LIBC FUNCTION.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (!s2 && !s1)
		return (0);
	i = 0;
	while (n > 0)
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
